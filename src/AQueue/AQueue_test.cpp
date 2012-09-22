#include <iostream>
#include "AQueue.h"

int main(){
  std::cout << "Hello World!!!!\n";
  AQueue* q = new AQueue();
  q->enqueue(1);
  q->dequeue();
  q->size();
  q->isEmpty();
  return 0;
}
