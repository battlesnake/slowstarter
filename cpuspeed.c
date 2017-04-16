#include <stdio.h>
#include <stdint.h>
#include <time.h>

#define NUM_LOOPS 1000000000UL

int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	extern uint64_t calc(uint64_t loops);
	clock_t t1;
	clock_t t2;
	clock_t dt;
	t1 = clock();
	t2 = t1 + 4 * CLOCKS_PER_SEC;
	while (clock() < t2) ;
	t1 = clock();
	uint64_t cycles = calc(NUM_LOOPS);
	t2 = clock();
	dt = t2 - t1;
	uint64_t rate = cycles * CLOCKS_PER_SEC / dt;
	printf("%lu\n", rate);
	return 0;
}
