#include "matrix.h"

#include <stdlib.h>

int_matrix_t *int_matrix_create(const int rows)
{
    int_matrix_t *matrix = malloc(sizeof(int_matrix_t));
    matrix->rows = rows;
    return matrix;
}
