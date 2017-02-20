#include <stdlib.h>
#include <check.h>

#include "matrix.h"

START_TEST(int_matrix_create_sets_row_count_correctly)
{
    int_matrix_t *matrix = int_matrix_create(2);

    ck_assert_ptr_ne(NULL, matrix);
    ck_assert_int_eq(2, matrix->rows);
}
END_TEST

Suite * create_suite_matrix_operations(void)
{
    Suite *suite;
    TCase *tcase;

    suite = suite_create("Matrix Management");

    tcase = tcase_create("Create Int Matrix");
    tcase_add_test(tcase, int_matrix_create_sets_row_count_correctly);
    suite_add_tcase(suite, tcase);

    return suite;
}

int main(void) {
    int number_failed;

    Suite *suite;
    SRunner *suiteRunner;

    suite = create_suite_matrix_operations();
    suiteRunner = srunner_create(suite);

    srunner_run_all(suiteRunner, CK_NORMAL);
    number_failed = srunner_ntests_failed(suiteRunner);
    srunner_free(suiteRunner);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}