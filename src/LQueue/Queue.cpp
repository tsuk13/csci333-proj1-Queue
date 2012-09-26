#include <list>
#include <cassert>
#include "Queue.h"

Queue::Queue(){
}

Queue::~Queue(){
}

int Queue::dequeue(){
  assert(queue.size() > 0);
  int r = queue.front();
  queue.pop_front();
  return r;
}

void Queue::enqueue(int a){
  queue.push_back(a);
}

int Queue::size(){
  return queue.size();
}

bool Queue::isEmpty(){
  return queue.empty();
}
