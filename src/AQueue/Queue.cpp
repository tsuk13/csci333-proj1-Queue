#include "Queue.h"
#include <cassert>

Queue::Queue(int size) {
  assert(size > 0);
  currentSize = size;
  initialSize = size;
  numElements = 0;
  front = 0;
  back = 0;
  queue = new int[currentSize];
}

Queue::~Queue(){
  delete[] queue;
}

int Queue::dequeue(){
  if(numElements < currentSize / 4 && currentSize / 2 >= initialSize){
    int* tmp = new int[currentSize / 2];
    for(int i = 0; i < numElements; i++){
     tmp[i] = queue[(front + i)%currentSize];
    }
    front = 0;
    back = numElements;
    currentSize = currentSize / 2;
    delete[] queue;
    queue = tmp;
  }
  assert(numElements>0);  //check to make sure the queue is not empty
  int tmp = queue[front];
  front = (front + 1) % currentSize ;
  numElements--;
  return tmp;
}

void Queue::enqueue(int a){
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
}

int Queue::size(){
  return numElements;
}

bool Queue::isEmpty(){
  return (numElements == 0);
}  
