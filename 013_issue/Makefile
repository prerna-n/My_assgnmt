CPPFLAGS=-Wall -Werror
all:
	g++ template.cpp  -o output  $(CPPFLAGS)

debug:
	g++ template.cpp  -o output  $(CPPFLAGS) -D DEBUG

run: all
	./output

clean:
	rm output 
