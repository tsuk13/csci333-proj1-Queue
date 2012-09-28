BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: AQueue_test LQueue_test LLQueue_test

AQueue_test: AQueue_test.cpp $(SRC)/AQueue/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o AQueue_test AQueue_test.cpp $(SRC)/AQueue/Queue.o $(GTEST_MAINA)

LQueue_test: LQueue_test.cpp $(SRC)/LQueue/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o LQueue_test LQueue_test.cpp $(SRC)/LQueue/Queue.o $(GTEST_MAINA)

LLQueue_test: LLQueue_test.cpp $(SRC)/LLQueue/Queue.o $(SRC)/LLQueue/Node.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o LLQueue_test LLQueue_test.cpp $(SRC)/LLQueue/Queue.o $(SRC)/LLQueue/Node.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f AQueue_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean
