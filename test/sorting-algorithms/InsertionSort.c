#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../lib/CuTest.h"
#include "../src/sorting-algorithms/insertion-sort/insertion-sort.h"

void TestInsertionSortPassCases(CuTest* tc)
{
	int arrA[] = {9, 4, 15, 7, 75};
  insertionSort(arrA, 5);
	CuAssertTrue(tc, (arrA[0] == 4 && arrA[1] == 7 && arrA[2] == 9 && arrA[3] == 15 && arrA[4] == 75));
	
	int arrB[] = {4, 9, 390, 390, 0, -10};
  insertionSort(arrB, 6);
	CuAssertTrue(tc, (arrB[0] == -10 && arrB[1] == 0 && arrB[2] == 4 && arrB[3] == 9 && arrB[4] == 390 && arrB[5] == 390));
}
