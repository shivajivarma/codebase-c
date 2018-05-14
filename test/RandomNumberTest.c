#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../lib/CuTest.h"
#include "../src/random-number/random-number.h"


/*-------------------------------------------------------------------------*
 * Random Number Test Suite
 *-------------------------------------------------------------------------*/

void TestRandomNumber(CuTest* tc)
{
  int rand = generateRandomNumber(100);
	CuAssertTrue(tc, (rand < 1 || rand > 100));
  
  rand = generateRandomNumber(500);
	CuAssertTrue(tc, (rand < 1 || rand > 500));
}
