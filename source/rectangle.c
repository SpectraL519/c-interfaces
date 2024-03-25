#include "rectangle.h"

#include <stdio.h>
#include <stdlib.h>

const char* rectangle_type() {
    return "rectangle";
}

double rectangle_area(const void* const obj) {
    const rectangle* const this = (const rectangle* const)obj;
    return this->length * this->width;
}

double rectangle_perimeter(const void* const obj) {
    const rectangle* const this = (const rectangle* const)obj;
    return 2 * (this->length + this->width);
}

rectangle* rectangle_new(const double length, const double width) {
    static shape_interface rectangle_interface = 
        {rectangle_type, rectangle_area, rectangle_perimeter};

    rectangle* this = malloc(sizeof(rectangle));
    if (this != NULL) {
        this->length = length;
        this->width = width;
        this->base = &rectangle_interface;
    }
    return this;
}