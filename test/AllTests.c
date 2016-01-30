#include <stdio.h>

#include "lib/CuTest.h"

CuSuite* CuStringGetSuite(void);
CuSuite* CuStringGetSuite2(void);

int RunAllTests(void)
{
	CuString *output = CuStringNew();
	CuSuite* suite = CuSuiteNew();

	CuSuiteAddSuite(suite, CuStringGetSuite());
	CuSuiteAddSuite(suite, CuStringGetSuite2());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);
	return suite->failCount;
}

int main(void)
{
	return RunAllTests();
}
