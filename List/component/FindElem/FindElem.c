#include "headers.h"

Status FindElem(const SqList L,Elemtype e,Status (*compare)(Elemtype,Elemtype)){
    int i;
    for(i=0;i<L.length;i++){
        if(!(*compare)(L.elem[i],e)){
            return i+1;
        }
    }
    if(i>=L.length){
        return ERROR;
    }
}