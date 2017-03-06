CPPFLAGS=-Wall -Werror
all:
	g++ infixtopost.cpp  -o out  $(CPPFLAGS)

debug:
	g++ infixtopost.cpp  -o out  $(CPPFLAGS) -D DEBUG

run: all
	./out

clean:
	rm out 
