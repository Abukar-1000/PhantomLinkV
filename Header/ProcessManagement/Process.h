#ifndef PROCCESS_H
#define PROCCESS_H

#include <iostream>
#include <windows.h>
#include <psapi.h>
#include <algorithm>
#include "ExecutionStatus.h"

namespace PhantomLink {

}

enum ProcessStatus {
    FailedInitialization = -2,
    Dead = -1,
    Alive = 1
};

class Process {
protected:
    std::string name;
    DWORD id;
    HANDLE handle;
public:
    ProcessStatus status;
    ~Process(void);
    Process(void);
    Process(DWORD id);
    std::string getName(void);
    DWORD getId(void);
    ExecutionStatus kill(void);
};

#endif // !PROCCESS_H
