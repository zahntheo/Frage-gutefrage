#ifndef HEADER30_H_INCLUDED
#define HEADER30_H_INCLUDED

#define MAXSTRNG 20
#define MAXI 10
#define BUFFER_ERROR -1
#define INVALID_INPUT -2
#define MAX_TEMP 100
#define MIN_TEMP -273.15
#define INPUT 3

#define TEMP(s) (s * (9.0/5.0)) + 32

void output(double temp[]);
int input_safe(double temp[]);
void combine(double temp[], double test[]);
int flush_buff(void);

#endif
