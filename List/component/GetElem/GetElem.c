#include "headers.h"

Status GetElem(const SqList L,int i,Elemtype *e){
    if((i<1) || i > L.length){
        return ERROR;
    }

    *e = L.elem[i-1];
    return OK;
}