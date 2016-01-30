#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib/CuTest.h"
#include "../src/anagram/anagram.h"


/*-------------------------------------------------------------------------*
 * CuSampleTest
 *-------------------------------------------------------------------------*/

void TestCuStringNew(CuTest* tc)
{
	CuAssertTrue(tc, isAnagram("test","estt") == 1);
}

CuSuite* CuStringGetSuite(void)
{
	CuSuite* suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, TestCuStringNew);

	return suite;
}
