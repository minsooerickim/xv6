#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int pid = fork();
    int options = 0;
    int status;

    waitpid(pid, &status, options);
    exit(0);
}