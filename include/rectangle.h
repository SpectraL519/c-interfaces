#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape_interface.h"

typedef struct {
    shape_interface* base;
    double length;
    double width;
} rectangle;

const char* rectangle_type();
double rectangle_area(const void* const obj);
double rectangle_perimeter(const void* const obj);
rectangle* rectangle_new(const double length, const double width);

#endif // RECTANGLE_H