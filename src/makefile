BUILD = ../build
CPP = g++
CFLAGS = -Wall -Wextra

main_AQ: AQueue/AQueue_test.cpp AQueue/AQueue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/main_AQ AQueue/AQueue_test.cpp AQueue/AQueue.o
AQueue/Aqueue.o: AQueue/AQueue.cpp AQueue/AQueue.h
	cd AQueue; $(CPP) $(CFLAGS) -c AQueue.cpp
clean:
	rm -f */*.o
	rm -f $(BUILD)/main
