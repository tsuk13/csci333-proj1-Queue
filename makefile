BUILD = ./build
SRC = ./src
LIB = ./lib
TEST = ./test

CPP = g++
CFLAGS = -Wall -Wextra

all: $(BUILD)/main_AQ
	
$(BUILD)/main_AQ: $(SRC)/AQueue/Queue_test.cpp $(SRC)/AQueue/Queue.cpp $(SRC)/AQueue/Queue.h
	cd $(SRC); $(MAKE)
clean:
	cd $(SRC); $(MAKE) clean
