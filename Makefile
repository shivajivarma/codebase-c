CC = gcc
define program_test
	$(CC) $(1) -o test
	./test
	
endef
DIRECTORYS = $(wildcard */test.c) $(wildcard */*/test.c)
all: test
test:
	$(foreach PROGRAM, $(DIRECTORYS), \
	$(call program_test, $(PROGRAM))	\
	)

