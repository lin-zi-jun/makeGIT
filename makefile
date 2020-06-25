.PHONY:clean
OBJS = ClearList.o compare.o
BIN = 1.0.0
$(BIN):$(OBJS)
	gcc -o $@ $^
%.o:%.c
	gcc -o $@ -c $^
clean:
	rm -f $(BIN) $(OBJS)