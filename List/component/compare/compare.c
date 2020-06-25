#include "headers.h"

Status compare(Elemtype e1,Elemtype e2){
    if(e1 == e2){
        return 0;
    }else if(e1 < e2){
        return -1;
    }else{
        return 1;
    }
}