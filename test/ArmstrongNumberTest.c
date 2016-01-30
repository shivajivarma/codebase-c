#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib/CuTest.h"
#include "../src/armstrong-number/armstrong-number.h"


/*-------------------------------------------------------------------------*
 * Armstrong Number Test Suite
 *-------------------------------------------------------------------------*/

void TestIsArmstrongPassCases(CuTest* tc)
{
	CuAssertTrue(tc, isArmstrong(153) == 1);
	CuAssertTrue(tc, isArmstrong(371) == 1);
}

void TestIsArmstrongFailCases(CuTest* tc)
{
	CuAssertTrue(tc, isArmstrong(150) == 1);
	CuAssertTrue(tc, isArmstrong(1150) == 0);
}

CuSuite* CuArmstrongNumberSuite(void)
{
	CuSuite* suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, TestIsArmstrongPassCases);
	SUITE_ADD_TEST(suite, TestIsArmstrongFailCases);

	return suite;
}
