#include <stdio.h>

int main()
{
int num1, num2;
int yigindi, ayirma, kopaytma, bolinma, qoldiqli_bolish;


printf("2ta sonni kiriting: \n");
scanf("%d %d", &num1, &num2);


yigindi = num1 + num2;
ayirma = num1 - num2;
//bolinma = num1 % num2;
kopaytma = num1 * num2;
qoldiqli_bolish = num1 / num2;

printf("yigindi %d  \n", yigindi);
//scanf("%d = %d + %d \n", num1, num2);
printf("ayirma %d \n", ayirma);
//scanf("%d = %d - %d \n", num1, num2);
//printf("bolinma %d \n", bolinma);
//scanf("%d = %d % %d \n", num1, num2);
printf("kopaytma %d \n", kopaytma);
//scanf("%d = %d * %d \n", num1, num2);
printf("qoldiqli bolish %f", qoldiqli_bolish);
//scanf("%f = %d / %d", num1, num2);

return 0;
}
