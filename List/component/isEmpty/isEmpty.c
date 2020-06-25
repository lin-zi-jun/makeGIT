#include "headers.h"


Status isEmpty(const SqList L){
    if(L.length == 0){
        return TRUE;
    }else{
        return FALSE;
    }
}