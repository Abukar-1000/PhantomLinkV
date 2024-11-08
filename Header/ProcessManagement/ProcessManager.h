#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_H

#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <psapi.h>
#include <thread>
#include <vector>
#include  "Process.h"
#include "ExecutionStatus.h"
#include "ProcessListStatus.h"

class ProcessManager {
protected:
    std::thread workerThread;
    std::vector<Process> proccess; // Allocate 200 proccesses ahead of time
public:
    ProcessManager();
    void enumerate(void);
    ExecutionStatus kill(DWORD processId);
    ProcessListStatus findProcesses(void); // Listens on a separate thread & puts data in a vector
};

#endif // !PROCESS_MANAGER_H
