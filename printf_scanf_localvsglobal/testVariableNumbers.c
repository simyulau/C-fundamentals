#include <stdio.h>

int main (void){
int integer1 = 1; //all local
int integer2 = 2;
int integer3 = 3;

printf("************************************\n");
printf("Background:\n");
printf("integer1 = %d, integer2 = %d, integer3 = %d\n", integer1, integer2, integer3);
printf("------------------------------------\n");
printf("Less %%d than variables provided\n");
printf("printf with 1 %%d and 2 variables - integer1, integer2: %d\n", integer1, integer2);
printf("CODE: printf( ...text..... : %%d, integer1, integer2)\n");
printf("RESULT: only 1 %%d printed, first variable value used\n");
printf("------------------------------------\n");
printf("More %%d than variables provided\n");
printf("2x %%d and 1 var (only integer1): %d and %d\n", integer1);
printf("CODE: %%d and %%d, integer1\n");
printf("RESULT: 2nd %%d is random value\n");







}