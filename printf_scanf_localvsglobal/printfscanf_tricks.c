#include <stdio.h>

/*
all variables inside a function  = LOCAL VARIABLES
not auto initialized, contain GARBAGE VALUE

variables OUTSIDE of all function = GLOBAL VARIABLES
can exist outside of any blocks (well it's already outside)
auto intialized to 0 by default (for int)

global defaults, local garbage

*/


int main (void){
int integer_1 = 1; //all local
int integer_2 = 2;
int integer_3 = 3;

int input_20;
int input_21;
int input_22;

/* 
1) Created 3 variables, scanf for 2, left 1 uninitialized
2) printf all, that var with missing value = garbage value
STILL COMPILES!!!!  */


printf("***************************\n");
printf("scanf : less %%d than var - OK, last var not used/accessed\n");
printf("2x %%d , 3 &variable, the last one has no value\n");
scanf("%d %d", &input_20, &input_21, &input_22);

printf("************************\n");
printf("printf: more %%d than variable - RANDOM VAR SHOW UP\n");
printf("input_20 is = %d\n input_21 is = %d\n(missing)input_22 is = random num:%d\n", input_20, input_21);
printf("************************\n");

}