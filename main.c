#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
char *ftemp = readline("Enter temperature in celsius: ");
double temp = atof(ftemp);
double ctemp = (temp/5)*9+32;
printf("%.6f° in Celsius is equivalent to %.6f° Fahrenheit",temp, ctemp );
  return 0;
}