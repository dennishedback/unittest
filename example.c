#include "test.h"

void testcase_1(void)
{
    EXPECT(4 > 10); /* Fails */
    EXPECT(5 == 5); /* Passes */
}

void testcase_2(void)
{
    ASSERT(5 == 5); /* Passes, evaluations of tests continue */
    ASSERT(5 != 5); /* Fails, no more evaluations of tests */
    EXPECT(5 != 5); /* Never executed */
}

/* This function will never execute due to a failed assertion */
void testcase_3(void)
{
    EXPECT(4 == 4);
}

void init_tests(void)
{
    /* Register the testcases for evaluation */
    TC_REG(testcase_1);
    TC_REG(testcase_2);
    TC_REG(testcase_3);
}

void cleanup_tests(void)
{
    /* Use tis one to free memory etc */
}
