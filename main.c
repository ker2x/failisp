#include "parse_args.h"

#include "failisp.h"

int main(int argc, char** argv) {
    printf("Hello, Failisp\n");
    parse_args(argc, argv); //exit(0) on fail
    printf("bye");
    return 0;
}

