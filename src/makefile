BUILD = ../build
CPP = g++
CFLAGS = -Wall -Wextra

main_AQ: AQueue/Queue_test.cpp AQueue/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/main_AQ AQueue/Queue_test.cpp AQueue/Queue.o
AQueue/Aqueue.o: AQueue/Queue.cpp AQueue/Queue.h
	cd AQueue; $(CPP) $(CFLAGS) -c Queue.cpp
clean:
	rm -f */*.o
	rm -f $(BUILD)/main
