#include "circle.h"

#include <stdio.h>
#include <stdlib.h>

const char* circle_type() {
    return "circle";
}

double circle_area(const void* const obj) {
    const circle* const this = (const circle* const)obj;
    return 3.14 * this->radius * this->radius;
}

double circle_perimeter(const void* const obj) {
    const circle* const this = (const circle* const)obj;
    return 2 * 3.14 * this->radius;
}

circle* circle_new(const double radius) {
    static shape_interface circle_interface = 
        {circle_type, circle_area, circle_perimeter};

    circle* this = malloc(sizeof(circle));
    if (this != NULL) {
        this->radius = radius;
        this->base = &circle_interface;
    }
    return this;
}