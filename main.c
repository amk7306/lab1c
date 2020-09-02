#include <stdio.h>
#include <readline/readline.h>

int main(void) {
double ctemp; 
char *ftemp = readline("Enter temperature in Celcius: ");
ctemp = atof(ftemp-32)*5/9;
printf("%.2f ° in celsius is equivalent to %.2f ° fahrenheit", ftemp, ctemp);
  return 0;
}