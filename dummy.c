#include <Windows.h>
#include <stdio.h>

void takenap(void) {
    SleepEx(INFINITE, TRUE);
}

int main(void) {
    printf(
        "I'm a thread with ID %ld from process ID %ld and I'm about to take a nap!\n",
        GetCurrentThreadId(),
        GetCurrentProcessId()
    );
    
    while(1) {
        takenap();
    }
    
    return EXIT_SUCCESS;
}
