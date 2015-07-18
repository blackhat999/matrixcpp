all: main.cpp

%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@

