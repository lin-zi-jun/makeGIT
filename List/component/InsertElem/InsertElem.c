#include "headers.h"

Status InsertElem(SqList *L,int i,Elemtype e){
    Elemtype *new;
    if((i < 1)||(i > L->length +1)){
        return ERROR;
    }
    if(L->length >= L->size){
        new = (Elemtype*) realloc(L->elem,(L->size+INC_SIZE)*sizeof(Elemtype));
        if(!new){
            return ERROR;
        }
        L->elem = new;
        L->size += INC_SIZE;
    }
    Elemtype *p = &L->elem[i-1];
    Elemtype *q = &L->elem[L->length -1];
    for(;q >= p;q--){
        *(q+1) = *q;
    }
    *p = e;
    ++L->length;
    return OK;
}