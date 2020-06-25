.PHONY:all clean
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
# DEPS = $(SRCS:.c=.d)


all:$(BIN) $(DEPS)

# ifneq ("$(wildcard $(DEPS))","")
# include $(DEPS)
# endif

$(BIN):$(OBJS)
	gcc -o $@ $*
%.o:%.c
	@echo "打印 SRCS"
	@echo $(SRCS)
	gcc -o $@ -c  $(filter %.c,$^)
# %.d:%.c 
# 	gcc -MM $^ > $@

clean:
	rm -f $(BIN) $(OBJS) $(DEPS)