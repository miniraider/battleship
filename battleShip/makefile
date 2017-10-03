CC       = gcc
RM       = rm
CCFLAGS  = -pedantic -Wall -Wextra
ALLIN  = main.o battleship.o
LDFLAGS  = -lcurses -lm
REP_SRC  = ./src/
REP_HEAD = ./headers/
REP_TEST = ./test/
NAME     = battleship
EXEC     = $(REP_OBJ)main.o $(REP_OBJ)$(NAME).o

$(NAME) : $(REP_SRC)main.o $(REP_SRC)battleship.o
		$(CC) -o $(NAME) $(ALLIN)

$(REP_SRC)battleship.o : ./src/battleship.c
		$(CC) -o battleship.o  $< -c
$(REP_SRC)main.o : ./src/main.c
		$(CC) -o main.o $< -c
