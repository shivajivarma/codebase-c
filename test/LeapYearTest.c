#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../lib/CuTest.h"
#include "../src/date/leap-year/leap-year.h"


/*-------------------------------------------------------------------------*
 * Leap Year Test Suite
 *-------------------------------------------------------------------------*/

void TestIsLeapYearPassCases(CuTest* tc)
{
	CuAssertTrue(tc, isLeapYear(2008));
	CuAssertTrue(tc, isLeapYear(2400));
}

void TestIsLeapYearFailCases(CuTest* tc)
{
	CuAssertTrue(tc, !isLeapYear(1900));
	CuAssertTrue(tc, !isLeapYear(1563));
}
