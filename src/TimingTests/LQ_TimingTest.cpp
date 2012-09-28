#include <iostream>
#include <ctime>
#include "../LQueue/Queue.h"

int main(){
  int start, end, elapsed, factor;
  double seconds;

  start = clock(); //starting ticks
  
  factor = 1000; //determines stress
  
  for(int i = 0; i < factor; i++){ //simple create and destroy Queue
    Queue* q = new Queue();
    delete q;
  }

  for(int i = 0; i < factor; i++){ //create varying size and destroy
    Queue* q = new Queue();
    for(int j = 0; j < i; j++){
      q->enqueue(j);
    }
    delete q;
  }

  for(int i = 0; i < factor; i++){ //create varying size and dequeue
    Queue* q = new Queue();
    for(int j = 0; j < i; j++){
      q->enqueue(j);
    }
    for(int j = 0; j < i; j++){
      q->dequeue();
    }
    delete q;
  }
  
  Queue* q = new Queue();  //check isEmpty and size at every size enqueueing and dequeueing
  for(int i = 0; i < factor; i++){
    q->enqueue(i);
    q->size();
    q->isEmpty();
  }
  for(int i = 0; i < factor; i++){
    q->dequeue();
    q->size();
    q->isEmpty();
  }


  end = clock(); //get ending ticks
  elapsed = end - start; //total ticks elapsed
  seconds = (double) elapsed/CLOCKS_PER_SEC; //convert to seconds

  std::cout << seconds << " seconds elapsed.\n";
  return 0;
}
