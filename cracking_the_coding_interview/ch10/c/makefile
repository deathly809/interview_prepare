
SRC=$(wildcard *.c)
PROGS=$(patsubst %.c,$(BIN)/c_%,$(SRC))

all: $(PROGS)

$(BIN)/c_%: %.c
	gcc -Wall -Wextra -g $< -o $@

clean:
	-@rm -fv $(PROGS)

nuke: clean
