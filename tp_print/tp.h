#ifndef __TP_H
#define __TP_H
#include <sys/time.h>

typedef enum{
    SET_NODE,
    GET_NODE,
    SET_AND_GET_NODE,
}node_flag_t;

#define INFO_VAL_MAX  10
typedef struct tp_info
{
	char *p_name; 
	time_t time_point;
    node_flag_t flag;
}tp_info_t;


typedef struct tp
{
	time_t (*get_tp_ms)(void);
	tp_info_t info[INFO_VAL_MAX];
}tp_t;


enum{
    TP0,
    TP1,
    TP2,
    TP3,
    TP4,
    TP5,
    TP6,
    TP7,
    TP8,
    TP9,
    TP_MAX = INFO_VAL_MAX,
};

#define TP0_NAME "test0"
#define TP1_NAME "test1"
#define TP2_NAME "test2"
#define TP3_NAME "test3"
#define TP4_NAME "test4"
#define TP5_NAME "test5"
#define TP6_NAME "test6"
#define TP7_NAME "test7"
#define TP8_NAME "test8"
#define TP9_NAME "test9"


void tp_init();
time_t get_tp_ms(void);
void tp_printf(char *name,node_flag_t node);

#define get_ms get_tp_ms 

#endif
