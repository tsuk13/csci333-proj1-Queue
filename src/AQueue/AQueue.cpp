#include "AQueue.h"
#include <iostream>
#include <cassert>

using std::cout;

AQueue::AQueue(int initialSize) {
  cout << "Constructor Called\n";
  currentSize=initialSize;
}

AQueue::~AQueue(){
  cout << "Deconstructor Called woot\n";
}

int AQueue::dequeue(){
  cout << "Deqeueu Called\n";
  return 0;
}

void AQueue::enqueue(int a){
  cout << "Enqueue Called\n";
  testItem = a;
}

int AQueue::size(){
  cout << "Size Called\n";
  return 0;
}

bool AQueue::isEmpty(){
  cout << "IsEmpty Called\n";
  return true;
}  
