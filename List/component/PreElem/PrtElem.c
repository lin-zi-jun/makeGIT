#include "headers.h"


Status PreElem(const SqList L,Elemtype cur_e,Elemtype *pre_e){
    int i;
    for(i = 0;i< L.length;i++){
        if(cur_e == L.elem[i]){
            if(i!=0){
                *pre_e = L.elem[i-1];
            }
            else{
                return ERROR;
            }
            
        }
    }
    if(i > L.length){
        return ERROR;
    }
}