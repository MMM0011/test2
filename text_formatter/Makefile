# Compiler and flags
CC = gcc
CFLAGS = -fPIC -I./src
LDFLAGS = -shared

# Directories
SRCDIR = src
LIBDIR = /usr/local/lib
INCDIR = /usr/local/include

# Source and object files
SRC = $(SRCDIR)/convert.c
OBJ = $(SRCDIR)/convert.o
LIB = libconvert.so

# Targets
all: $(LIB) uper low

$(LIB): $(OBJ)
	$(CC) $(LDFLAGS) -o $(LIB) $(OBJ)
	@sudo mv $(LIB) $(LIBDIR)
	@sudo ldconfig
	@sudo cp $(SRCDIR)/convert.h $(INCDIR)

uper: $(SRCDIR)/uper.c
	$(CC) -o uper $(SRCDIR)/uper.c -L$(LIBDIR) -lconvert

low: $(SRCDIR)/low.c
	$(CC) -o low $(SRCDIR)/low.c -L$(LIBDIR) -lconvert

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)

clean:
	rm -f $(SRCDIR)/*.o uper low

clean-all: clean
	@sudo rm -f $(LIBDIR)/$(LIB)
	@sudo rm -f $(INCDIR)/convert.h
	@sudo ldconfig

.PHONY: all clean clean-all
