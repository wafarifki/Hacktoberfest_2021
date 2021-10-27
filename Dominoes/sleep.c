#include <time.h>
#include "sleep.h"

#define ONE_SECOND 1		  // 1 second
#define HALF_SECOND 500000000 // 0.5 seconds

/*
 * Makes the execution of the program paused for
 * the number of seconds passed as parameter.
 */
void sleep_n_seconds(long segundos)
{
	struct timespec tim, tim2;
	tim.tv_sec = segundos;
	tim.tv_nsec = 0;

	nanosleep(&tim, &tim2);
}

/*
 * Makes the execution of the program paused for
 * the number of nanoseconds passed as parameter.
 */
void sleep_n_nanoseconds(long nanosegundos)
{
	struct timespec tim, tim2;
	tim.tv_sec = 0;
	tim.tv_nsec = nanosegundos;

	nanosleep(&tim, &tim2);
}

/*
 * Makes the execution of the program paused for
 * a fixed number of seconds defined as constant.
 */
void sleep_a_bit()
{
	sleep_n_seconds(ONE_SECOND);
}

/*
 * Makes the execution of the program paused for
 * a fixed number of nanoseconds defined as constant.
 */
void sleep_a_nano_bit()
{
	sleep_n_nanoseconds(HALF_SECOND);
}
