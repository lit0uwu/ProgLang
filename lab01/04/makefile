program.exe: main.o message.o hello.o goodbye.o
	g++ main.o message.o hello.o goodbye.o -o program.exe

main.o: main.cpp functions.h
	g++ -c main.cpp

message.o: message.cpp functions.h
	g++ -c message.cpp

hello.o: hello.cpp functions.h
	g++ -c hello.cpp

goodbye.o: goodbye.cpp functions.h
	g++ -c goodbye.cpp
