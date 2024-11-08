windowsDependancyPath = Dependancies/Header/Windows
windowsLibDependancyPath = C:/"Program Files (x86)"/"Windows Kits"/10/Lib/10.0.26100.0/um/x86
windowsSockLib = Ws2_32
runServer: server
	g++ -std=c++17 Server.o Src/main.cpp -o phantomLink -L$(windowsLibDependancyPath) -l$(windowsSockLib)

server: Source/Server/Server.cpp Header/Server/Server.h
	echo windows path: $(windowsLibDependancyPath)
	echo lib file: $(windowsSockLib)
	g++ -std=c++17 -c Source/Server/Server.cpp -o Server.o

clean:
	echo cleaning
	rm *.o