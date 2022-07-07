MAIN_DIR = src
INC_DIR = include
SRCDIR = lib
OBJDIR = obj
SRCS := $(shell find $(SRCDIR) -name "*.c")
SRCSPP := $(shell find $(SRCDIR) -name "*.cpp")
OBJSC := $(SRCS:.c=.o)
OBJSCPP := $(SRCSPP:.cpp=.o)

CC=gcc
CPP=g++
CFLAGS= -Wall -std=c11
CPPFLAGS= -Wall -std=c++11

all: mainc maincpp

mainc: $(SRCS) $(MAIN_DIR)/main.c
	$(CC) $(CFLAGS) -I $(INC_DIR)/ $(SRCS) $(MAIN_DIR)/main.c -o mainc

maincpp: $(SRCSPP) $(MAIN_DIR)/main.cpp
	$(CPP) $(CPPFLAGS) -I $(INC_DIR)/ $(SRCSPP) $(MAIN_DIR)/main.cpp -o maincpp

clean:
	rm ./mainc ./maincpp

