
CC      = g++
INCLUDE = -I.
CFLAGS  = --std=c++11 -g -Wall

SRC     =   $(wildcard *.cpp)
BIN     =   $(patsubst %.cpp,%,$(SRC))

JAVA        =   $(wildcard Problem*.java)
JAVA_BIN    =   $(patsubst %.java,%.class,$(JAVA))

all: $(BIN) $(JAVA_BIN)

%: %.cpp
	$(CC) $(INCLUDE) $(CFLAGS) $< -o $@

%.class: %.java
	javac $<

clean:
	-@rm -fv $(BIN)
	-@rm -fv *.class 
