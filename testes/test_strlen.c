#include "minunit.h"
#include "../src/ft_strlen.c"

MU_TEST(hello_len_5)
{
	int 	expected_result = 5;
	char	*to_be_tested = "hello";

	int test_result = ft_strlen(to_be_tested);

	mu_assert_int_eq(expected_result, test_result);
}

MU_TEST(null_len_0)
{
	int 	expected_result = 0;
	char	*to_be_tested = "";

	int test_result = ft_strlen(to_be_tested);

	mu_assert_int_eq(expected_result, test_result);
}

MU_TEST(int_len_0)
{
	int 	expected_result = 11;
	char	*to_be_tested = "hello world";

	int test_result = ft_strlen(to_be_tested);

	mu_assert_int_eq(expected_result, test_result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(hello_len_5);
	MU_RUN_TEST(null_len_0);
	MU_RUN_TEST(int_len_0);
}

int main(int argc, char **argv)
{
	MU_RUN_TEST(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}