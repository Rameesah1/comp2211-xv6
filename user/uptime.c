#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    // Call the uptime system call to get the uptime in ticks
    int ticks = uptime();

    // Print the uptime in ticks
    printf("System uptime: %d ticks\n", ticks);

    // Exit the program successfully
    exit(0);
}

