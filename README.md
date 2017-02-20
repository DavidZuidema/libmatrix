# libmatrix

A test-driven C implementation of a linear algebra library for manipulating matricies.

I developed this library while surveying [MIT 18.06 Linear Algebra](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8) by Gilbert Strang. Rather than do the practice problems by hand, I opted to implement the algorithms in C. I used the exercises in the book to develop the unit tests.

The library uses GNU Make as a build system and libcheck as the unit testing framework.

## Make Targets

```sh
$ make all          # compile all object files
$ make test-build   # compile all test files
$ make test         # compile and run test suite
$ make clean        # delete build files and binaries
```

## Interface

```c
/**
 * Initializes all elements to 0
 * Uses HEAP, remember to free
 */
int_matrix_t int_matrix_create(const int rows, const int columns);
```

