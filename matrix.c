#include "matrix.h"

#include <stdlib.h>

int_matrix_t *int_matrix_create(const int rows, const int columns)
{
    int_matrix_t *matrix = malloc(sizeof(int_matrix_t));
    matrix->rows = rows;
    matrix->columns = columns;
    return matrix;
}
