#ifndef SHAPE_INTERFACE_H
#define SHAPE_INTERFACE_H

typedef struct {
    const char* (*type)();
    double (*area)(const void* const obj);
    double (*perimeter)(const void* const obj);
} shape_interface;

#endif // SHAPE_INTERFACE_H