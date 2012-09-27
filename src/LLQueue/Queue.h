#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "Node.h"

class Queue {
  private:
    Node* front;
    Node* back;
    int curSize;

  public:
    Queue();
    ~Queue();
    int dequeue();
    void enqueue(int a);
    int size();
    bool isEmpty();
};
#endif
