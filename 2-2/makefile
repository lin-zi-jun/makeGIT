#gcc -MM显示依赖
.PONHY:all clean #声明为目标
ifeq ($(DEBUG),"true")
CC = gcc -g
else
CC = gcc
endif
#每条命令都会开一个进程去执行
#规则由 目标 依赖 还有命令组成
#可以有多个目标，一般以第一个作为默认目标
all:test1  #all 依赖于test 一个目标可以作为依赖
all:test2
#规则1
test1 :		#一个目标可以没有依赖 $@表示目标变量
	@echo "Just for test1:$@" 
	#命令：必须以tap键开头

#规则2
test2:
	@echo "Just for test2"


#规则3
#目标：hello   依赖：lcd.o player.o
hello:lcd.o player.o
	@echo "start build hello"			
	$(CC) -o hello lcd.o player.o
	@echo "build hello sucess"
#%.o:%.c	#模式匹配
#	$(CC) -o $@ -c $^

clean:
	rm -f lcd.o hello player.o

# make -j6 并发执行
