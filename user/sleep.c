#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    // Checks if the user provided an argumentC
    if (argc != 2) {
        printf("Usage: sleep <ticks>\n");
        exit(1);  // Exit with an error code
    }

    // Convert the argument to an integer (ticks)
    int ticks = atoi(argv[1]);

    // Call the sleep system call
    sleep(ticks);

    // Exit the program successfully
    exit(0);
}
