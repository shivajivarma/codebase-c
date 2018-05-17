#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../lib/CuTest.h"
#include "../src/sorting-algorithms/bubble-sort/bubble-sort.h"

void TestBubbleSortPassCases(CuTest* tc)
{
	int arrA[] = {9, 4, 15, 7, 75};
  bubbleSort(arrA, 5);
	CuAssertTrue(tc, (arr[0] == 4 && arr[1] == 7 && arr[2] == 9 && arr[3] == 15 && arr[4] == 75));
	
	int arrB[] = {4, 9, 390, 390, 0, -10};
  bubbleSort(arrB, 6);
	CuAssertTrue(tc, (arr[0] == -10 && arr[1] == 0 && arr[2] == 4 && arr[3] == 9 && arr[4] == 390 && arr[5] == 390));
}
