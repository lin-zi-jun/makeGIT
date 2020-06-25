#include "headers.h"


static void visit(Elemtype e){
    printf("%d",e);
}

Status TraverseList(const SqList L, void (*visit)(Elemtype))
{
    int i;
    for(i = 0; i < L.length; i++)
    {
        visit(L.elem[i]);
    }
    return OK;
}