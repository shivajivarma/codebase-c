#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../lib/CuTest.h"
#include "../src/math/armstrong-number/armstrong-number.h"


/*-------------------------------------------------------------------------*
 * Armstrong Number Test Suite
 *-------------------------------------------------------------------------*/

void TestIsArmstrongPassCases(CuTest* tc)
{
	CuAssertTrue(tc, isArmstrong(153));
	CuAssertTrue(tc, isArmstrong(371));
}

void TestIsArmstrongFailCases(CuTest* tc)
{
	CuAssertTrue(tc, !isArmstrong(150));
	CuAssertTrue(tc, !isArmstrong(1150));
}