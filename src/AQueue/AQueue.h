#ifndef __AQUEUE_H__
#define __AQUEUE_H__

class AQueue {
  private:
    int currentSize;
    int* queue;
    int front;
    int back;
    int numElements;
    int initialSize;

  public:
    AQueue(int size = 10);
    ~AQueue();
    int dequeue();
    void enqueue(int a);
    int size();
    bool isEmpty();
};
#endif
