#include <stdio.h>
#include <stdlib.h>

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