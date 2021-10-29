#include <time.h>	// time()
#include <stdlib.h> // rand(), srand()
#include <stdio.h>	// printf()
#include "random.h"

/*
 * initialize_random() has to be executed once at the beginning of main
 * to start the generation of random numbers
 */
//void initialize_random() {
/*
	 * To ensure that the sequence of random numbers is the samePara que la sequencia de numeros aleatorios sea igual en cada
	 * in each execution use srand(0) instead srand(time).
	 */
//srand(0);
//	srand( (unsigned)time( NULL ) );
//}

/*
 * random_number(max) returna a random integer number between 0 and max-1.
 */
int random_number(int max)
{
	srand(time(NULL));
	return (rand() % max);
}
