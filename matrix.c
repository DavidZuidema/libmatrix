#include "matrix.h"

#include <stdlib.h>

int_matrix_t *int_matrix_create(const int rows, const int columns)
{
    int_matrix_t *matrix = malloc(sizeof(int_matrix_t));
    matrix->rows = rows;
    matrix->columns = columns;
    matrix->data = calloc(rows * columns, sizeof(int));
    return matrix;
}

void int_matrix_destroy(int_matrix_t *matrix)
{
    if (matrix != NULL) {
        free(matrix->data);
    }
}
