#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../lib/CuTest.h"
#include "../src/anagram/anagram.h"


/*-------------------------------------------------------------------------*
 * Anagram Test Suite
 *-------------------------------------------------------------------------*/

void TestIsAnagramPassCases(CuTest* tc)
{
	CuAssertTrue(tc, isAnagram("test","estt"));
	CuAssertTrue(tc, isAnagram("helloworld","wolrdheoll"));
}

void TestIsAnagramFailCases(CuTest* tc)
{
	CuAssertTrue(tc, !isAnagram("test","estt3"));
	CuAssertTrue(tc, !isAnagram("helloworld","wklrdgheoll"));
}
