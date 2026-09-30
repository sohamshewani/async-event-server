#ifndef CORE_H
#define CORE_H

#include <stdbool.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Function prototypes
void init_core(struct event_loop *loop);
void shutdown_core(struct event_loop *loop);

// Core functionality
int handle_events(struct event_loop *loop);
bool is_event_ready(int fd, uint32_t events);

#endif // CORE_H