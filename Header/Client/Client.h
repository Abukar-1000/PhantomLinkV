
#ifndef CLIENT_MAIN_EXISTS
#define CLIENT_MAIN_EXISTS

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <stdio.h>

#include <iostream>
#include <sstream>
#include <chrono>
#pragma comment(lib, "Ws2_32.lib")

#define DEFAULT_PORT "8998"
#define SERVER_ADDRESS "10.0.0.178"
#define MAX_BUFFER_LEN 512
#define p(x) std::cout << x << "\n"


int ClientMain();

#endif // !CLIENT_MAIN_EXISTS

