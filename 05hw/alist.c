// Copyright 2018 Ibrahim

#include <stdlib.h>
#include <assert.h>
#include "alist.h"

alist_t alalloc(void) {
    alist_t *list = calloc(1, sizeof(alist_t));
    assert(list != NULL);
    list->arr = calloc(DEFAULT_LEN, 0);
    list->len = DEFAULT_LEN;
    list->size = 0;
    return list;
}


