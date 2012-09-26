#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
  public:
    Queue(int size = 10);
    ~Queue();
    int dequeue();
    void enqueue(int a);
    int size();
    bool isEmpty();
};
#endif
