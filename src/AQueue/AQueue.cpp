#include "AQueue.h"
#include <iostream>
#include <cassert>

using std::cout;

AQueue::AQueue(int initialSize) {
  currentSize=initialSize;
  numElements = 0;
  front = 0;
  back = 0;
  queue = new int[currentSize];
}

AQueue::~AQueue(){
  delete[] queue;
}

int AQueue::dequeue(){
  assert(numElements>0);  //check to make sure the queue is not empty
  int tmp = queue[front];
  front = (front + 1) % currentSize ;
  numElements--;
  return tmp;
}

void AQueue::enqueue(int a){
  if(numElements >= currentSize){
    int* tmp = new int[currentSize*2];
    for(int i = 0; i < numElements; i++){
     tmp[i] = queue[(front + i)%currentSize];
    }
    front = 0;
    back = numElements;
    currentSize = currentSize * 2;
    delete[] queue;
    queue = tmp;
  }
  assert(numElements < currentSize); //check to make sure queue is not full
  queue[back] = a;
  back = (back + 1) % currentSize;
  numElements++;
  std::cout << "currentsize: " << currentSize << "\n";
}

int AQueue::size(){
  return numElements;
}

bool AQueue::isEmpty(){
  return (numElements == 0);
}  
