#include "AQueue.h"
#include <iostream>
#include <cassert>

using std::cout;

AQueue::AQueue(int initialSize) {
  cout << "Constructor Called\n";
  currentSize=initialSize;
  numElements = 0;
  front = 0;
  back = 0;
  queue = new int[currentSize];
}

AQueue::~AQueue(){
  cout << "Deconstructor Called woot\n";
  delete[] queue;
}

int AQueue::dequeue(){
  cout << "Deqeueu Called\n";
  assert(numElements>0);  //check to make sure the queue is not empty
  int tmp = queue[front];
  front++; //Modify for ribbon array
  numElements--;
  return tmp;
}

void AQueue::enqueue(int a){
  cout << "Enqueue Called\n";
  assert(numElements < currentSize); //check to make sure queue is not full
  queue[back] = a;
  back++; //Modify for ribbon array
  numElements++;
}

int AQueue::size(){
  cout << "Size Called\n";
  return numElements;
}

bool AQueue::isEmpty(){
  cout << "IsEmpty Called\n";
  return (numElements == 0);
}  
