# I am not very good at Makefiles.

CFLAGS += -Wall -g
INCLUDES = -I.

all: bin/CuTestTest

bin:
	mkdir -p $@

test: bin/CuTestTest
	@bin/CuTestTest

bin/CuTestTest: test/AllTests.c test/Sample.c test/Sample2.c test/lib/CuTest.c | bin
	$(CC) $(CFLAGS) $(INCLUDES) -lm -o $@ $^

clean:
	@rm -rf *~ bin
