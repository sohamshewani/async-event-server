#ifndef EVENT_H
#define EVENT_H

#include <stdbool.h>

// Event types
enum event_type { READABLE, WRITABLE, ERROR, TIMEOUT };

// Event structure
struct event {
    int fd;            // File descriptor
    enum event_type type; // Type of event
    void *data;        // Data pointer
    int (*callback)(int, void *); // Callback function
};

#endif // EVENT_H