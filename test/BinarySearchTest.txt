#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../lib/CuTest.h"
#include "../src/searching-algorithms/binary-search/binary-search.h"


/*-------------------------------------------------------------------------*
 * Binary Search Test Suite
 *-------------------------------------------------------------------------*/

void TestBinarySearchPassCases(CuTest* tc)
{
	CuAssertTrue(tc, binarySearch({45, 56, 79, 81, 98, 156, 190}, 7, 81) == 4);
	CuAssertTrue(tc, binarySearch({4, 9, 92, 390}, 4, 92) == 3);
}

void TestBinarySearchFailCases(CuTest* tc)
{
	CuAssertTrue(tc, !binarySearch("test","estt3"));
	CuAssertTrue(tc, !binarySearch("helloworld","wklrdgheoll"));
}

CuSuite* CuAnagramSuite(void)
{
	CuSuite* suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, TestIsAnagramPassCases);
	SUITE_ADD_TEST(suite, TestIsAnagramFailCases);

	return suite;
}
