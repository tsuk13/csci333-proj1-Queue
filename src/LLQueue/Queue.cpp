#include "Node.h"
#include "Queue.h"
#include <iostream>
#include <cassert>

Queue::Queue(){
  curSize = 0;
}

Queue::~Queue(){
  while(front != 0){
    Node* tmp = front;
    front = front->getNext();
    delete tmp;
  }
}

int Queue::dequeue(){
  assert(curSize > 0);
  int val = front->getValue();
  Node* tmp = front;
  front = front->getNext();
  delete tmp;
  curSize--;
  return val;
}

void Queue::enqueue(int a){
  Node* newNode = new Node(a);
  if(curSize > 0){
    back->setNext(newNode);
    back = back->getNext();
  }
  else{
    front = back = newNode;
  }
  curSize++;
}

int Queue::size(){
  return curSize;
}

bool Queue::isEmpty(){
  return curSize == 0;
}
