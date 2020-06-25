#include "headers.h"


Status ClearList(SqList *L){
    L->length = 0;
    return OK;
}