CFLAGS = -Wall -Wextra -std=c11 -Iinclude
SRCS = src/core.c
OBJS = $(SRCS:.c=.o)
EXEC = async-event-server

all: $(EXEC)

$(EXEC): $(OBJS)
	gcc -o $@ $^ -lm

%.o: %.c include/%.h
	gcc $(CFLAGS) -c $< -o $@

check: $(OBJS)
	make -C tests check

integration-tests: $(OBJS)
	make -C tests integration-tests

clean:
	rm -f $(OBJS) $(EXEC)
	make -C tests clean
