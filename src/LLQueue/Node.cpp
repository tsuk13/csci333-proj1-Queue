#include "Node.h"

Node::Node(int v){
  value = v;
}

Node::~Node(){
}

int Node::getValue(){
  return value;
}

void Node::setNext(Node* n){
  next = n;
}

Node* Node::getNext(){
  return next;
}
