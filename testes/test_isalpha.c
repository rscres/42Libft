#include "minunit.h"
#include "../src/ft_isalpha.c"

MU_TEST(a_isalpha)
{
	int expected_result = 1;
	int to_be_tested = 'a';

	int test_result = ft_isalpha(to_be_tested);

	mu_assert_int_eq(expected_result, test_result);
}

MU_TEST(num_isalpha)
{
	int expected_result = 0;
	int to_be_tested = 2;

	int test_result = ft_isalpha(to_be_tested);

	mu_assert_int_eq(expected_result, test_result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(a_isalpha);
	MU_RUN_TEST(num_isalpha);
}

int main(int argc, char **argv)
{
	MU_RUN_TEST(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}