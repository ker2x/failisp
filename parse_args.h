//
// Created by ker on 14/04/2021.
//

#ifndef FAILISP_PARSE_ARGS_H
#define FAILISP_PARSE_ARGS_H

#include "getopt.h"
#include "libgen.h"
#include "stdio.h"
#include "stdlib.h"

static const char short_opts[] = "rhf:";
char* file_opt;

int parse_args(int argc, char** argv);
static void usage(char** argv);


#endif //FAILISP_PARSE_ARGS_H
