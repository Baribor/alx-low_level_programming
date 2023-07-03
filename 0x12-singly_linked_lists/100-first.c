#include <stdio.h>

/**
 * firstRunBeforeMain - Runs before main
 */
void firstRunBeforeMain(void) __attribute__((constructor));

/**
 * firstRunBeforeMain - Runs before main
 */
void firstRunBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
