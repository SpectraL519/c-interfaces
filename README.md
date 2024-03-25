# c-interfaces

C interface pattern showcase project

<br/>

### Overview

This project defines a `shape_interface` structure with three "virtual" functions: `type`, `area`, `perimiter`.

There are two "derived" structures: `circle` and `rectangle` which "implement" the `shape_interface`.

In the `main.c` file there is a function `print_shape_params` which takes the interface and the object as parameters and prints the values of all three interface functions.

<br/>

### Build and run

```shell
> gcc -o shapes app/main.c source/*.c -I include/
> ./shapes
```