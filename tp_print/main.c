#include<stdio.h>
#include "tp.h"
#include <sys/time.h>
#include <unistd.h>
#include <string.h>


time_t get_tp_ms(void){
	struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000 + tv.tv_usec/1000;
}

int main()
{
	tp_init();
	tp_printf("test9",SET_NODE);
	sleep(1);
	tp_printf("test9",GET_NODE);


	return 0;
}
