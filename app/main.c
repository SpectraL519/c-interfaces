#include "shape_interface.h"
#include "circle.h"
#include "rectangle.h"

#include <stdio.h>
#include <stdlib.h>

void print_shape_params(const shape_interface* const shape, const void* const obj) {
    printf("type: %s\n", shape->type());
    printf("area: %lf\n", shape->area(obj));
    printf("perimeter: %lf\n", shape->perimeter(obj));
}

int main(void) {
    circle* c = circle_new(5);
    print_shape_params(c->base, c);
    free(c);

    rectangle* r = rectangle_new(4, 5);
    print_shape_params(r->base, r);
    free(r);

    return 0;
}