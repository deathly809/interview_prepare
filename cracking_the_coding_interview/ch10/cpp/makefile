
SRC=$(wildcard *.cpp)
PROGS=$(patsubst %.c,$(BIN)/cpp_%,$(SRC))

all: $(PROGS)

$(BIN)/cpp_%: %.cpp
	gcc -Wall -Wextra -g $< -o $@

clean:
	-@rm -fv $(PROGS)

nuke: clean
