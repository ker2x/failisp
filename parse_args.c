//
// Created by ker on 14/04/2021.
//

#include "failisp.h"
#include "parse_args.h"
#include "repl.h"

_Noreturn void usage(char** argv) {
    printf("usage : ");
    printf("%s <file>\n", basename(argv[0]));
    exit(0);
}

int parse_args(int argc, char** argv) {

    int c;

    if(argc < 2) {
        debug("argc < 2");
        usage(argv);
    }

    while((c = getopt(argc, argv, short_opts)) != -1) {
        switch(c) {
            case 'r':
                //REPL ?
                repl();
                debug("REPL not implemented");
                break;
            case 'f':
                file_opt = optarg;
                printf("not implemented : opening file '%s' from : -f %s \n", file_opt, file_opt);
                //debug("open file not implemented");
                //openfile ?
                break;
            case 'h':
            case '?':
            default:
                usage(argv);

        }
    }


    return 0;
}