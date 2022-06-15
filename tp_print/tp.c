#include<stdio.h>
#include "tp.h"
#include <sys/time.h>
#include <unistd.h>
#include <string.h>

static tp_t tp;
void tp_init(void)
{
	tp.get_tp_ms = get_ms;
	tp.info[TP0].p_name  = TP0_NAME;
    tp.info[TP1].p_name  = TP1_NAME;
    tp.info[TP2].p_name  = TP2_NAME;
    tp.info[TP3].p_name  = TP3_NAME;
    tp.info[TP4].p_name  = TP4_NAME;
    tp.info[TP5].p_name  = TP5_NAME;
    tp.info[TP6].p_name  = TP6_NAME;
    tp.info[TP7].p_name  = TP7_NAME;
    tp.info[TP8].p_name  = TP8_NAME;
    tp.info[TP9].p_name  = TP9_NAME;
}


void tp_printf(char *name,node_flag_t node){
	int n = -1;
	for(int i=TP0;i<INFO_VAL_MAX;i++){
		if(tp.info[i].p_name!=NULL){
			if(strcmp(tp.info[i].p_name,name)==0){
				n = i;
				break;
			}
		}
	}

	if(n != -1){
		if(node==SET_NODE){
			tp.info[n].time_point = tp.get_tp_ms();
		}else if(node==GET_NODE){
			printf("%s:%ld\r\n",name,(tp.get_tp_ms() - tp.info[n].time_point));
		}else if(node==SET_AND_GET_NODE){
			printf("%s:%ld\r\n",name,(tp.get_tp_ms() - tp.info[n].time_point));
			tp.info[n].time_point = tp.get_tp_ms();
		}
	}else{
		printf("err:fail to find tp_name:%s\r\n",name);
	}
}



