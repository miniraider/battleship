CC       = gcc
RM       = rm
CCFLAGS  = -pedantic -Wall -Wextra
ALLIN  = main.o battleShip.o
LDFLAGS  = -lcurses -lm
REP_SRC  = ./src/
REP_HEAD = ./headers/
REP_TEST = ./test/
NAME     = battleship
EXEC     = $(REP_OBJ)main.o $(REP_OBJ)$(NAME).o

$(NAME) : $(ALLIN)
		$(CC) -o $(NAME) $(ALLIN)

$(REP_SRC)$(NAME).o : $(REP_SRC)$(NAME).c battleShip.h
		$(CC) -o $(NAME).o -c $(NAME).c $<
clean :
		-@$(RM) $(REP_OBJ)*.o
			-@$(RM) $(NAME)
