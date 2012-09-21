BUILD = ./build
SRC = ./src
LIB = ./lib
TEST = ./test

CPP = g++
CFLAGS = -Wall -Wextra

all: $(BUILD)/main
	
$(BUILD)/main: $(SRC)/AQueue/AQueue.cpp
	cd $(SRC); $(MAKE)
clean:
	cd $(SRC); $(MAKE) clean
