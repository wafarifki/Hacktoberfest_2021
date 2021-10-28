// Este fichero se le da al alumno
#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int out_of_range(int n, int min, int max);
void to_lower_caps(char *c);
int ask_n_in_range(char *s, int min, int max);
int ask_yes_or_no(char *s);

#endif // QUESTIONS_H
