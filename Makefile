output: ./obj/main.o ./obj/game1.o ./obj/cpu.o
	mkdir -p bin
	g++ -std=c++11 ./obj/main.o ./obj/game1.o ./obj/cpu.o -o ./bin/exe

./obj/main.o: ./source/main.cpp 
	mkdir -p obj
	g++ -c ./source/main.cpp -o ./obj/main.o -std=c++11

./obj/game1.o: ./source/game1.cpp ./include/game1.h
	mkdir -p obj
	g++ -c ./source/game1.cpp -o ./obj/game1.o -std=c++11

./obj/cpu.o: ./source/cpu.cpp ./include/cpu.h
	mkdir -p obj
	g++ -c ./source/cpu.cpp -o ./obj/cpu.o -std=c++11

clean:
	rm -r obj/ bin/*