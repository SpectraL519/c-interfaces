#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape_interface.h"

typedef struct {
    shape_interface* base;
    double radius;
} circle;

const char* circle_type();
double circle_area(const void* const obj);
double circle_perimeter(const void* const obj);
circle* circle_new(const double radius);

#endif // CIRCLE_H