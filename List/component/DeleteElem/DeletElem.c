#include "headers.h"

Status DeleteElem(SqList *L,int i,Elemtype *e){
    if(i<1||i > L->length){
        return ERROR;
    }
    Elemtype *p = &L->elem[i-1];
    *e = *p;
    for(;p<&L->elem[L->length];p++){
        *(p) = *(p+1);
    }
    --L->length;
    return OK;
}
