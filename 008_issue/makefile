CPPFLAGS=-Wall -Werror
all:
	g++ stack5.cpp -o stack5 $(CPPFLAGS)

debug:
	g++ stack5.cpp -o stack5 $(CPPFLAGS) -D DEBUG

run: all
	./stack5

cppcheck:
	cppcheck stack5.cpp  --enable=all

clean:
	rm stack5 
