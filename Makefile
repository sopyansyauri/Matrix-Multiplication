
CC = gcc
FILE_NAME = main.c
SRC_DIRECTORY = src/

.PHONY : all
all: build_execute


.PHONY : build_execute
build_execute: 
	$(CC) $(SRC_DIRECTORY)$(FILE_NAME) -o main 


.PHONY: clean
clean:
	$(RM) $(postclean)

postclean = $(addprefix ./, main ) 
