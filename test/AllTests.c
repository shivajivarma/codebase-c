#include <stdio.h>

#include "lib/CuTest.h"

CuSuite *CuAnagramSuite(void);

CuSuite *CuArmstrongNumberSuite(void);

CuSuite *CuGCDSuite(void);

int RunAllTests(void) {
    CuString *output = CuStringNew();
    CuSuite *suite = CuSuiteNew();

    CuSuiteAddSuite(suite, CuAnagramSuite());
    CuSuiteAddSuite(suite, CuArmstrongNumberSuite());
    CuSuiteAddSuite(suite, CuGCDSuite());

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
    return suite->failCount;
}

int main(void) {
    return RunAllTests();
}
