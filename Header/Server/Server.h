#ifndef SERVER_MAIN_EXISTS
#define SERVER_MAIN_EXISTS

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif


// #include "../../Dependancies/Header/Windows/windows.h"
// #include "../../Dependancies/Header/Windows/winsock2.h"
// #include "../../Dependancies/Header/Windows/ws2tcpip.h"
// #include "../../Dependancies/Header/Windows/iphlpapi.h"

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <iostream>
#include <sstream>
#include <stdio.h>

// #include "Request.pb.h"
// #include <google/protobuf/arena.h>

#pragma comment(lib, "Ws2_32.lib")
#define DEFAULT_PORT "8998"
#define MAX_BUFFER_LEN 512
#define p(x) std::cout << x << "\n"

int ServerMain();

#endif // !SERVER_MAIN_EXISTS
