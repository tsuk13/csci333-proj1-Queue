#include "Node.h"
#include "Queue.h"
#include <cassert>

Queue::Queue(){
//  std::cout << "Constructor Called\n";
  curSize = 0;
}

Queue::~Queue(){
//  std::cout << "Deconstructor Called\n";
/*  while(front != 0){
    Node* tmp = front;
    front = front->getNext();
    delete tmp;
  }*/
  while (curSize > 0){
    dequeue();
  }
}

int Queue::dequeue(){
//  std::cout << "dequeue called w/ cursize " << curSize <<"\n";
  assert(curSize > 0);
  int val = front->getValue();
  Node* tmp = front;
  front = front->getNext();
  delete tmp;
  curSize--;
  return val;
}

void Queue::enqueue(int a){
//  std::cout << "enqueue called\n";
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
//  std::cout << "Size called\n";
  return curSize;
}

bool Queue::isEmpty(){
//  std::cout << "isEmpty called";
  return curSize == 0;
}
