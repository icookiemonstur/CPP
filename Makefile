CC = g++
CFLAGS = -Wall -Wextra -Werror -Wpedantic 
LDFLAGS = 
EXEC = main
OBJS = datatypes.o main.o 

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC)	$(LDFLAGS)	-o	$(EXEC)	$(OBJS)

datatypes.o: datatypes.cpp 
	$(CC)	$(LDFLAGS)	-c	datatypes.cpp


clean:
	rm -f $(EXEC)	$(OBJS)

scan-build: clean
	scan-build	--use-cc=$(CC)	make



