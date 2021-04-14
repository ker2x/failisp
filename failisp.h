//
// Created by ker on 14/04/2021.
//

#ifndef FAILISP_FAILISP_H
#define FAILISP_FAILISP_H

#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"


#define debug(message) fprintf(stderr, "%s:%d: %s\n",__FILE__,__LINE__,message)
#define is_paren(x) ((x) == '(' || (x) == ')')
#define is_ignored(x) (isspace((x)) || (x) == '\n' || (x) == '\r' || (x) == '\t')

//singly linked list
typedef struct list {
    struct list* next;
    void* data;
} list;

//Lisp Token
enum LTOKEN {
    L_INT = 1,
    L_CELL,
    L_BOOL,
};

#endif //FAILISP_FAILISP_H
