// Copyright 2018 Ibrahim

#include <stdlib.h>
#include <assert.h>
#include "alist.h"

alist_t* alalloc(void) {
    alist_t *list = malloc(sizeof *list);
    assert(list != NULL);
    list->size = 0;
    list->len = DEFAULT_LEN;
    list->arr = calloc(DEFAULT_LEN, sizeof(void *));
    assert(list->arr != NULL);
    return list;
}

void push(alist_t* lst, void *item) {
    // Hidden Code
    // Hidden Code
    // Hidden Code
    // Hidden Code
    // Hidden Code
    // Hidden Code
}

void* pop(alist_t *lst){
    // Hidden Code
    // Hidden Code
    // Hidden Code
    // Hidden Code
    // Hidden Code
}

void* find(alist_t *lst, bool (*sel)(void*)){
   // Hidden Code
   // Hidden Code
   // Hidden Code
   // Hidden Code
   // Hidden Code
   // Hidden Code
   // Hidden Code
   // Hidden Code
   // Hidden Code
}
void map(alist_t *lst, void* (*func)(void*)){
    // Hidden Code
    // Hidden Code
    // Hidden Code
    // Hidden Code
    // Hidden Code
    // Hidden Code
}
