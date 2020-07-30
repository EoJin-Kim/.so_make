CC=gcc -m32

TIZEN_DIR	= /home/Tizen_toolchain/armv7l
TIZEN_CC 	= $(TIZEN_DIR)/bin/armv7l-tizen-linux-gnueabi-gcc-4.8.3
TIZEN_SYSROOT 	= --sysroot=$(TIZEN_DIR)/armv7l-tizen-linux-gnueabi/sys-root
#TIZEN_INCLUDE 	= -I$(TIZEN_DIR)/armv7l-tizen-linux-gnueabi/lib

CC 	= $(TIZEN_CC)
SYSROOT = $(TIZEN_SYSROOT)

 
CFLAGS=-Wall -g -O0 --static
#CFLAGS=-Wall -g -O1 -shared -fPIC

#SRCS = inotify.c
SRCS = test.c
 
OBJS =

.c.o:
	$(CC) $(CFLAGS) -c $<

all: inotify_test

inotify_test: $(OBJS)
	$(CC) $(SYSROOT) $(CFLAGS) $(OBJS) $(SRCS) -o ARM_BIN

clean:
	rm -f $(OBJS) *.bak test

