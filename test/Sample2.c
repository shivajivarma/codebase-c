#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib/CuTest.h"



/*-------------------------------------------------------------------------*
 * CuSampleTest
 *-------------------------------------------------------------------------*/

void TestCuStringNew2(CuTest* tc)
{
	CuString* str = CuStringNew();
	CuAssertTrue(tc, 0 == str->length);
	CuAssertTrue(tc, 0 != str->size);
	CuAssertStrEquals(tc, "", str->buffer);
}

CuSuite* CuStringGetSuite2(void)
{
	CuSuite* suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, TestCuStringNew2);

	return suite;
}
