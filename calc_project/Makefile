CC = gcc
CFLAGS = -I./src

SRCDIR = src
LIBDIR = lib

SRC = $(SRCDIR)/calc.c
OBJ = $(SRCDIR)/calc.o
LIB = $(LIBDIR)/libcalc.a

TARGET = calc_program

$(LIB): $(OBJ)
	@mkdir -p $(LIBDIR)
	$(AR) rcs $(LIB) $(OBJ)
	$(CC) $(SRCDIR)/main.o -L$(LIBDIR) -lcalc -o $(TARGET) -lm

$(TARGET): $(SRCDIR)/main.o $(LIB)
	$(CC) $(SRCDIR)/main.o -L$(LIBDIR) -lcalc -o $(TARGET) -lm

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)
	$(CC) $(CFLAGS) -c $(SRCDIR)/main.c -o $(SRCDIR)/main.o

clean:
	rm -f $(SRCDIR)/*.o $(TARGET)

clean-all: clean
	rm -f $(LIB)

.PHONY: clean clean-all
