all:
	g++ stack1-corrected.cpp Ivector.cpp -std=c++11 -g -Werror -Wall
	g++ boost_test.cpp Ivector.cpp -lboost_unit_test_framework -o test -std=c++11

test:
	g++ boost_test.cpp Ivector.cpp -lboost_unit_test_framework -o test -std=c++11

clean:
	rm a.out test 

setup:
	sudo apt-get install libboost-all-dev

testrun: test
	./test
