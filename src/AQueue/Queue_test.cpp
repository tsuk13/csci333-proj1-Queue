#include <iostream>
#include "Queue.h"

int main(){
  std::cout << "Hello World!!!!\n";
  Queue* q = new Queue();
   for(int i = 0; i < 50; i++){
    q->enqueue(i);
  }
  for(int i = 0; i < 50; i++){
    std::cout << q->dequeue() << std::endl;
  }
  delete q;
  return 0;
}
