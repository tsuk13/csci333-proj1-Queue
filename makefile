BUILD = ./build
SRC = ./src
LIB = ./lib
TEST = ./test

CPP = g++
CFLAGS = -Wall -Wextra

all: $(BUILD)/main_AQ $(BUILD)/main_LQ $(BUILD)/main_LLQ
	
$(BUILD)/main_AQ: $(SRC)/AQueue/Queue_test.cpp $(SRC)/AQueue/Queue.cpp $(SRC)/AQueue/Queue.h
	cd $(SRC); $(MAKE)

$(BUILD)/main_LQ: $(SRC)/LQueue/Queue_test.cpp $(SRC)/LQueue/Queue.cpp $(SRC)/LQueue/Queue.h
	cd $(SRC): $(MAKE)

$(BUILD)/main_LLQ: $(SRC)/LLQueue/Queue_test.cpp $(SRC)/LLQueue/Queue.cpp $(SRC)/LLQueue/Queue.h
	cd $(SRC): $(MAKE)

clean:
	rm build/*; cd $(SRC); $(MAKE) clean
