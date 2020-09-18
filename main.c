// Author: Adam Warsing ajw6150@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int digit_sum(int n);

int main(void){
char *number = readline("Enter an int: ");
int n = atol(number);
printf("sum of digits of %d is %d.\n",n,digit_sum(n));
return 0;
}

int digit_sum(int n){
  if (n == 0){
    return 0;
  }
  else{
    return (n%10 + digit_sum((n - n%10)/10));
  }
}

