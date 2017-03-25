
SRC=$(wildcard *.go)
PROGS=$(patsubst %.c,$(BIN)/go_%,$(SRC))

all: $(PROGS)

$(BIN)/go_%: %.c
	go build $< -o $@

clean:
	-@rm -fv $(PROGS)

nuke: clean
