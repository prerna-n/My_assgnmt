CPPFLAGS=-Wall -Werror
all:
	g++ string_reversal.cpp -o reverse $(CPPFLAGS)

debug:
	g++ string_reversal.cpp -o reverse $(CPPFLAGS) -D DEBUG

run: all
	./reverse

clean:
	rm reverse
   
