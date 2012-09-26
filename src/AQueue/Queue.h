#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
  private:
    int currentSize;
    int* queue;
    int front;
    int back;
    int numElements;
    int initialSize;

  public:
    Queue(int size = 10);
    ~Queue();
    int dequeue();
    void enqueue(int a);
    int size();
    bool isEmpty();
};
#endif
