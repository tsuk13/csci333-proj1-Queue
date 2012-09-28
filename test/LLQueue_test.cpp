#include "gtest/gtest.h"
#include "../src/LLQueue/Queue.h"

TEST(QueueTest, GeneralTenElement){
  Queue* q = new Queue();
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  for(int i = 0; i < 10; i++){
    q->enqueue(i);
  }
  EXPECT_EQ(10, q->size());
  for(int i = 0; i < 10; i++){
    EXPECT_EQ(i, q->dequeue());
  }
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  delete q;
}

TEST(QueueTest, General50Element){
  Queue* q = new Queue();
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  for(int i = 0; i < 50; i++){
    q->enqueue(i);
  }
  EXPECT_EQ(50, q->size());
  for(int i = 0; i < 50; i++){
    EXPECT_EQ(i, q->dequeue());
  }
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  delete q;
}

TEST(QueueTest, General200Element){
  Queue* q = new Queue();
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  for(int i = 0; i < 200; i++){
    q->enqueue(i);
  }
  EXPECT_EQ(200, q->size());
  for(int i = 0; i < 200; i++){
    EXPECT_EQ(i, q->dequeue());
  }
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  delete q;
}

TEST(QueueTest, Mixed200Element){
  Queue* q = new Queue();
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  for(int i = 0; i < 100; i++){
    q->enqueue(i);
  }
  EXPECT_EQ(100, q->size());
  for(int i = 0; i < 50; i++){
    EXPECT_EQ(i, q->dequeue());
  }
  EXPECT_EQ(50, q->size());
  for(int i = 0; i < 100; i++){
    q->enqueue(i);
  }
  EXPECT_EQ(150, q->size());
  for(int i = 50; i < 100; i++){
    EXPECT_EQ(i, q->dequeue());
  }
  EXPECT_EQ(100, q->size());
  for(int i = 0; i < 100; i++){
    q->enqueue(i);
  }
  EXPECT_EQ(200, q->size());
  for(int n = 0; n < 2; n++){
    for(int i = 0; i < 100; i++){
      EXPECT_EQ(i, q->dequeue());
    }
  }
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  delete q;
}
