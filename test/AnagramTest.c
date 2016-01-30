#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib/CuTest.h"
#include "../src/anagram/anagram.h"


/*-------------------------------------------------------------------------*
 * Anagram Test Suite
 *-------------------------------------------------------------------------*/

void TestIsAnagramPassCases(CuTest* tc)
{
	CuAssertTrue(tc, isAnagram("test","estt") == 1);
	CuAssertTrue(tc, isAnagram("helloworld","wolrdheoll") == 1);
}

void TestIsAnagramFailCases(CuTest* tc)
{
	CuAssertTrue(tc, isAnagram("test","estt3") == 0);
	CuAssertTrue(tc, isAnagram("helloworld","wklrdgheoll") == 0);
}

CuSuite* CuAnagramSuite(void)
{
	CuSuite* suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, TestIsAnagramPassCases);
	SUITE_ADD_TEST(suite, TestIsAnagramFailCases);

	return suite;
}
