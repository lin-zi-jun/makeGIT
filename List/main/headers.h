#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

#include "ClearList.h"
#include "compare.h"
#include "DeleteElem.h"
#include "DestroyList.h"
#include "FindElem.h"
#include "GetElem.h"
#include "getLength.h"
#include "InitList.h"
#include "InsertElem.h"
#include "isElem.h"
#include "NextElem.h"
#include "PreElem.h"
#include "TraverList.h"





#define TRUE 1
#define FALSE 0
#define OK 0
#define ERROR -1
#define INIT_LINK_SIZE 10
#define INC_SIZE 5

typedef int Status;
typedef int Elemtype;


typedef struct{
    Elemtype *elem;
    int length;
    int size;
}SqList;