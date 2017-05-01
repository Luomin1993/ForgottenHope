IDIR =..
LIBS =-lthostmduserapi -lthosttraderapi
CC=g++
CFLAGS=-std=c++11 -I$(IDIR) -L$(IDIR) $(LIBS)
EXECUTABLE=-o exe ../TickToKlineHelper.o

all : main.cpp
	$(CC) main.cpp $(CFLAGS) $(EXECUTABLE) 


clean :
	rm -f *.o rm *.out *.con *.orig execute 
