#ifndef POOL_H
#define POOL_H

#include <stdbool.h>

// Connection pool structure
struct pool {
    int size;          // Size of the pool
    struct event *events; // Array of events
};

// Pool functions
void init_pool(struct pool *pool, int size);
void shutdown_pool(struct pool *pool);
void add_event(struct pool *pool, int fd, enum event_type type, void *data, int (*callback)(int, void *));

#endif // POOL_H