#include "gtest/gtest.h"
#include "../src/AQueue/Queue.h"

TEST(QueueTest, GeneralTenElement){
  Queue* q = new Queue();
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  for(int i = 0; i < 10; i++){
    q->enqueue(i);
  }
  EXPECT_EQ(false, q->isEmpty());
  EXPECT_EQ(10, q->size());
  for(int i = 0; i < 10; i++){
    EXPECT_EQ(i, q->dequeue());
  }
  EXPECT_EQ(true, q->isEmpty());
  EXPECT_EQ(0, q->size());
  delete q;
  }
