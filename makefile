BUILD = ./build
SRC = ./src
LIB = ./lib
TEST = ./test

CPP = g++
CFLAGS = -Wall -Wextra

all: $(BUILD)/main_AQ
	
$(BUILD)/main_AQ: $(SRC)/AQueue/AQueue_test.cpp $(SRC)/AQueue/AQueue.cpp $(SRC)/AQueue/AQueue.h
	cd $(SRC); $(MAKE)
clean:
	cd $(SRC); $(MAKE) clean
