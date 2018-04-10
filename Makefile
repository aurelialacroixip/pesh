CXX=g++
CFLAGS =  -c -Wall -Werror
OBJECTS = build/main.o build/p_forward.o build/p_hack.o build/P_forward.o build/P_hack.o

all: bin build bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog

build/main.o: src/main.cpp src/functions.h
	$(CXX) $(CFLAGS) src/main.cpp -o build/main.o

build/p_forward.o: src/p_forward.cpp src/functions.h
	$(CXX) $(CFLAGS) src/p_forward.cpp -o build/p_forward.o

build/p_hack.o: src/p_hack.cpp src/functions.h
	$(CXX) $(CFLAGS) src/p_hack.cpp -o build/p_hack.o

build/P_forward.o: src/P_forward.cpp src/functions.h
	$(CXX) $(CFLAGS) src/P_forward.cpp -o build/P_forward.o

build/P_hack.o: src/P_hack.cpp src/functions.h
	$(CXX) $(CFLAGS) src/P_hack.cpp -o build/P_hack.o

build:
	mkdir build
bin:
	mkdir bin

clean:
	-rm -rf bin build

	

