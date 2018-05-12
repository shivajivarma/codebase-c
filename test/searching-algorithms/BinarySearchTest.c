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
	int arrA[] = {45, 56, 79, 81, 98, 156, 190};
	CuAssertTrue(tc, binarySearch(arrA, 7, 81) == 3);
	
	int arrB[] = {4, 9, 92, 390};
	CuAssertTrue(tc, binarySearch(arrB, 4, 92) == 2);
}