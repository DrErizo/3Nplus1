all:compile link

compile:
	g++ -c src/*.cc
link:
	g++ main.o -o bun/3x+1.exe