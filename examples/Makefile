output: cities.o Node.o AStar.o Dijkstra.o
	g++ -std=c++14 cities.o AStar.o Dijkstra.o Node.o -o PathFinder # -o output binary compiled file

cities.o: cities.cpp
	g++ -std=c++14 -c cities.cpp

AStar.o: ../src/AStar.cpp ../src/AStar.h
	g++ -std=c++14 -c ../src/AStar.cpp

Dijkstra.o: ../src/Dijkstra.cpp ../src/Dijkstra.h
	g++ -std=c++14 -c ../src/Dijkstra.cpp

Node.o: ../src/Node.cpp ../src/Node.h
	g++ -std=c++14 -c ../src/Node.cpp

clean:
	rm *.o PathFinder

#target: dependencies
#	action
