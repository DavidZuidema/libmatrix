#ifndef MATRIX_H
#define MATRIX_H

typedef struct int_matrix_s {
    int rows;
    int columns;
    int *data;
} int_matrix_t;

int_matrix_t *int_matrix_create(const int rows, const int columns);

#endif
