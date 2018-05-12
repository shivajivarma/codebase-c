#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../lib/CuTest.h"
#include "../src/gcd/gcd.h"


/*-------------------------------------------------------------------------*
 * GCD Test Suite
 *-------------------------------------------------------------------------*/

void TestGCDPassCases(CuTest* tc)
{
	CuAssertTrue(tc, gcd(35, 16) == 1);
	CuAssertTrue(tc, gcd(25, 25) == 25);
	CuAssertTrue(tc, gcd(64, 112) == 16);
}