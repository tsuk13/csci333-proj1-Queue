#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <list>

class Queue {
  private:
    std::list<int> queue;

  public:
    Queue();
    ~Queue();
    int dequeue();
    void enqueue(int a);
    int size();
    bool isEmpty();
};
#endif
