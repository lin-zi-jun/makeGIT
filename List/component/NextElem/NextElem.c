#include "headers.h"

Status NextElem(const SqList L,Elemtype cur_e,Elemtype *next_e){
    int i;
    for(i=0;i<L.length;i++){
        if(cur_e == L.elem[i]){
            if(i < L.length - 1){
                *next_e = L.elem[i+1];
                return OK;
            }else{
                return ERROR;
            }
            
        }
    }
    if (i>=L.length){
        return ERROR;
    }
}