#include <stdio.h>

int main()
{
printf("if there are more scanf intake than variable allocation\n");
printf("scanf (%%d%%d, &age)\n");
int age;
//scanf("%d %d", &age);
printf("RESULT:script will keep prompting for input\n");

printf("***********************************\n");
printf("if there are less scanf intake than variable allocation\n");
int month;
int year;
printf("scanf (%%d, &age, &month, &year)\n");
printf("if one variable UNDECLARED = ERROR\n");
scanf("%d", &age, &month);
printf("RESULT: still run\n");
printf("Age is =%d, month is = random value %d\n", age, month);


}

