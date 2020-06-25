#include "headers.h"

Status InitList(SqList *L){
    L->elem = (Elemtype *)malloc(INIT_LINK_SIZE * sizeof(Elemtype));
    if(!L->elem){
        return ERROR;
    }

    L->length = 0;
    L->size =INIT_LINK_SIZE;
    return OK;
}