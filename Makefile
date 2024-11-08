windowsDependancyPath = Dependancies/Header/Windows

runServer: server
	g++ -std=c++17 Server.o Src/main.cpp -o phantomLink

server: Source/Server/Server.cpp Header/Server/Server.h
	echo windows path: $(windowsDependancyPath)
	g++ -std=c++17 -c Source/Server/Server.cpp -o Server.o 

clean:
	echo cleaning