
SRC=$(wildcard *.cs)
PROGS=$(patsubst %.c,$(BIN)/cs_%,$(SRC))

all: $(PROGS)

$(BIN)/cs_%: %.c
	mono-csc $< -o $@

clean:
	-@rm -fv $(PROGS)

nuke: clean
