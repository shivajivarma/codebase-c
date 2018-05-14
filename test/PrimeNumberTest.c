#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../lib/CuTest.h"
#include "../src/prime-number/prime-number.h"


/*-------------------------------------------------------------------------*
 * Prime Test Suite
 *-------------------------------------------------------------------------*/

void TestIsPrimePassCases(CuTest* tc)
{
	CuAssertTrue(tc, isPrime(7));
	CuAssertTrue(tc, isPrime(7919));
}

void TestIsPrimeFailCases(CuTest* tc)
{
	CuAssertTrue(tc, !isPrime(9));
	CuAssertTrue(tc, !isPrime(1));
}
