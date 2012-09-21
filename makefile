BUILD = ./build
SRC = ./src
LIB = ./lib
TEST = ./test

CPP = g++
CFLAGS = -Wall -Wextra

all: $(BUILD)/main_AQ
	
$(BUILD)/main_AQ: $(SRC)/AQueue/AQueue_test.cpp
	cd $(SRC); $(MAKE)
clean:
	cd $(SRC); $(MAKE) clean
