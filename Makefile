CFLAGS = -Wall -Wextra
CC = g++
VPATH = src

01_diagnostico: 01_diagnostico.cpp
	$(CC) $(CFLAGS) $? -o bin/$@
