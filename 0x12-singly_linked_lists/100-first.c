#include <stdio.h>
#include <stdlib.h>
void beforeMain(void) __attribute__ ((constructor));
/**
 * beforeMain - prints sentence before main.
*/
void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house");
	printf(" upon my back!\n");
}
