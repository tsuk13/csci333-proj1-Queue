BUILD = ../build
CPP = g++
CFLAGS = -Wall -Wextra

All: main_AQ main_LQ

main_AQ: AQueue/Queue_test.cpp AQueue/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/main_AQ AQueue/Queue_test.cpp AQueue/Queue.o
AQueue/Queue.o: AQueue/Queue.cpp AQueue/Queue.h
	cd AQueue; $(CPP) $(CFLAGS) -c Queue.cpp

main_LQ: LQueue/Queue_test.cpp LQueue/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/main_LQ LQueue/Queue_test.cpp LQueue/Queue.o
LQueue/Queue.o: LQueue/Queue.cpp AQueue/Queue.h
	cd LQueue; $(CPP) $(CFLAGS) -c Queue.cpp

clean:
	rm -f */*.o
	rm -f $(BUILD)/main
