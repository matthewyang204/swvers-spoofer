PREFIX ?= /usr/local
PRODUCTNAME ?= "Mac OS X"
PRODUCTVERSION ?= "10.5.8"
BUILDVERSION ?= "9L31a"

CC ?= gcc
CFLAGS += -Wall -Wextra -O3
CFLAGS += -DPRODUCTNAME=$(PRODUCTNAME) -DPRODUCTVERSION=$(PRODUCTVERSION) -DBUILDVERSION=$(BUILDVERSION)

OBJS = swvers.o contains.o

sw_vers: $(OBJS)
	$(CC) $(OBJS) -o sw_vers

main.o: main.c contains.h
	$(CC) $(CFLAGS) -c main.c

contains.o: contains.c contains.h
	$(CC) $(CFLAGS) -c contains.c

clean:
	rm -rf $(OBJS) sw_vers
