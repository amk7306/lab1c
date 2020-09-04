  
// Author: Abbey Kato amk7306@psu.edu
// Collaborator: Jack Trueax jrt5617@psu.edu
// Collaborator: Jiahui Lan jzl6335@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *ftemp = readline("Enter temperature in celsius: ");
  double temp = atof(ftemp);
  double ctemp = (temp/5)*9+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",temp, ctemp );
  return 0;
}