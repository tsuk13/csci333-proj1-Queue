#include <iostream>
#include "AQueue.h"

int main(){
  std::cout << "Hello World!!!!\n";
  AQueue* q = new AQueue();
  std::cout << q->size() << std::endl;
  std::cout << q->isEmpty() << std::endl;
  for(int i = 0; i < 10; i++){
    q->enqueue(i);
  }
  std::cout << q->size() << std::endl;
  std::cout << q->isEmpty() << std::endl;
  for(int i = 0; i < 10; i++){
    std::cout << q->dequeue() << std::endl;
  }
  std::cout << q->size() << std::endl;
  std::cout << q->isEmpty() << std::endl;
  delete q;
  return 0;
}
