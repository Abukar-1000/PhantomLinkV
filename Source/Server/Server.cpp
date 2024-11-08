#include "../../Header/Server/Server.h"

int ServerMain() {
    WSADATA wsaData;
    int iResult;

    // Initialize Winsock [ Server fails if this is not initiated, must also be done on client ]
    p("Initializing Winsock");
    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (iResult != 0) {
        printf("WSAStartup failed: %d\n", iResult);
        return 1;
    }


    // start creating server socket
    p("creating server socket");
    struct addrinfo* result = NULL, * ptr = NULL, hints;
    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    hints.ai_flags = AI_PASSIVE;

    // Resolve the local address and port to be used by the server
    p("Resolving local address");
    iResult = getaddrinfo(NULL, DEFAULT_PORT, &hints, &result);
    if (iResult != 0) {
        printf("getaddrinfo failed: %d\n", iResult);
        WSACleanup();
        return 1;
    }

    // create socket
    p("Creating socket");
    SOCKET ListenSocket = INVALID_SOCKET;
    ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);

    // ensure socket is valid
    p("Validating socket");
    if (ListenSocket == INVALID_SOCKET) {
        printf("Error at socket(): %ld\n", WSAGetLastError());
        freeaddrinfo(result);
        WSACleanup();
        return 1;
    }


    // bind the socket
    // Setup the TCP listening socket
    p("binding socket");
    iResult = bind(ListenSocket, result->ai_addr, (int)result->ai_addrlen);
    if (iResult == SOCKET_ERROR) {
        printf("bind failed with error: %d\n", WSAGetLastError());
        freeaddrinfo(result);
        closesocket(ListenSocket);
        WSACleanup();
        return 1;
    }
    // Available address info in result is no longer needed once bind is successful
    if (result != NULL)
    {
        freeaddrinfo(result);
    }


    // GOOGLE_PROTOBUF_VERIFY_VERSION;

    // google::protobuf::Arena arena;
    // std::string msg = "This is my first protobuf msg";

    /*
    test::Request* requestProtobuf = arena.CreateMessage<test::Request>(&arena);
    requestProtobuf->mutable_msg()->assign(msg.c_str());
    */

    // test::Request requestProtobuf = test::Request();
    // requestProtobuf.set_allocated_msg(&msg);
    // p(requestProtobuf.msg());

    // Listen on a socket
    p("Server Firing with V cylinders!!!");
    if (listen(ListenSocket, SOMAXCONN) == SOCKET_ERROR) {
        printf("Listen failed with error: %ld\n", WSAGetLastError());
        closesocket(ListenSocket);
        WSACleanup();
        return 1;
    }

    // Accept a connection on the socket
    SOCKET ClientSocket;
    ClientSocket = INVALID_SOCKET;
    ClientSocket = accept(ListenSocket, NULL, NULL);
    if (ClientSocket == INVALID_SOCKET) {
        printf("accept failed: %d\n", WSAGetLastError());
        closesocket(ListenSocket);
        WSACleanup();
        return 1;
    }

    // recieve data on the client
    char recvbuf[MAX_BUFFER_LEN] = { 0 };
    int iRecieveResult, iSendResult;
    int recvbuflen = MAX_BUFFER_LEN;
    std::cout << "\n";
    std::stringstream ss;
    while (true)
    {
        iRecieveResult = recv(ClientSocket, recvbuf, recvbuflen, 0);
        if (iRecieveResult > 0)
        {
            // handle msg
            ss << recvbuf;            
            // test::Request newRequest;
            // std::string msg = ss.str();
            // newRequest.set_allocated_msg(&msg);
            std::cout << "recieved:\t" << ss.str() << " [ " << iRecieveResult << " bytes ]\n";
            ss.clear();

            // crear the buffer
            memset(recvbuf, 0, MAX_BUFFER_LEN);
        }
    }

    return 0;
}