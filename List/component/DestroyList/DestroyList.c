#include "headers.h"

Status DestroyList(SqList *L){
    free(L->elem);
    L->length = 0;
    L->size = 0;
    return OK;
}