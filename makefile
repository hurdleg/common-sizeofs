#
# File: makefile
# Purpose: make with macros
# Author: Gerald.Hurdle@AlgonquinCollege.com
#
CFLAGS = -g -w -Wall -ansi -pedantic
OBJS = main.o

common-sizeof.exe : $(OBJS)
	gcc -o common-sizeof.exe $(OBJS) && chmod +x common-sizeof.exe
main.o : main.c
.PHONY : clean
clean : 
	-rm common-sizeof.exe $(OBJS)
gitpush :
	git push -u origin master
