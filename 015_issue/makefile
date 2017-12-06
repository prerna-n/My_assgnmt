CPPFLAGS=-Wall -Werror
all:
	g++ tree.cpp  -o treetrav  $(CPPFLAGS)

debug:
	g++ tree.cpp  -o treetrav  $(CPPFLAGS) -D DEBUG

run: all
	./treetrav

clean:
	rm treetrav
