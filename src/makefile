BUILD = ../build
CPP = g++
CFLAGS = -Wall -Wextra

All: $(BUILD)/main_AQ $(BUILD)/main_LQ $(BUILD)/main_LLQ

$(BUILD)/main_AQ: AQueue/Queue_test.cpp AQueue/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/main_AQ AQueue/Queue_test.cpp AQueue/Queue.o
AQueue/Queue.o: AQueue/Queue.cpp AQueue/Queue.h
	cd AQueue; $(CPP) $(CFLAGS) -c Queue.cpp

$(BUILD)/main_LQ: LQueue/Queue_test.cpp LQueue/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/main_LQ LQueue/Queue_test.cpp LQueue/Queue.o
LQueue/Queue.o: LQueue/Queue.cpp LQueue/Queue.h
	cd LQueue; $(CPP) $(CFLAGS) -c Queue.cpp

$(BUILD)/main_LLQ: LLQueue/Queue_test.cpp LLQueue/Queue.o LLQueue/Node.o
	$(CPP) $(CFLAGS) -o $(BUILD)/main_LLQ LLQueue/Queue_test.cpp LLQueue/Queue.o LLQueue/Node.o
LLQueue/Queue.o: LLQueue/Queue.cpp LLQueue/Queue.h
	cd LLQueue; $(CPP) $(CFLAGS) -c Queue.cpp
LLQueue/Node.o: LLQueue/Node.cpp LLQueue/Node.h
	cd LLQueue; $(CPP) $(CFLAGS) -c Node.cpp

clean:
	rm -f */*.o
	rm -f $(BUILD)/main
