#ifndef __NODE_H__
#define __NODE_H__

class Node{
  private:
    Node* next;
    int value;

  public:
    Node(int v);
    ~Node();
    int getValue();
    Node* getNext();
    void setNext(Node* n);
};
#endif
