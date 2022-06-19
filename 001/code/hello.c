#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
    puts("Hello, World!");
    printf("pid: %d\n", getpid());
    for(int i = 0; i < argc; i++) {
        printf("[%2d] %s\n", i, argv[i]);
    }
    return 0;
}
