//
// Created by ker on 14/04/2021.
//

#include "repl.h"
#include "stdio.h"
#include "failisp.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>

_Noreturn void repl(void) {
    static char* line = (char*)NULL;

    printf("Failing REPL\n");
    printf("------------\n\n");

    while(1) {
        if(line) {
            free(line);
            line = (char*)NULL;
        }
        line = readline("repl> ");
        if (line && *line)
            add_history (line);
        printf("reading : %s\n", line);
    }
}