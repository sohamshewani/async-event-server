#ifndef LISTENER_H
#define LISTENER_H

#include <stdbool.h>

// Listener structure
struct listener {
    int fd; // File descriptor for the listener
    int (*callback)(int, void *); // Callback function
};

// Listener functions
void init_listener(struct listener *listener, int port, int (*callback)(int, void *));
void shutdown_listener(struct listener *listener);

#endif // LISTENER_H