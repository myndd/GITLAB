#include <conio.h>

#include <stdio.h>

#include <stdlib.h>

int main(void)

{    char numstring1[10],numstring2[10],numstring3[10];

    int in1;    float flo1;    long lon1;


    printf("\nEnter number as string1 : ");

   scanf("%s",numstring1);

    printf("\nEnter number as string2 : ");

   scanf("%s",numstring2);

    printf("\nEnter number as string3 : ");

   scanf("%s",numstring3);

   in1 = atoi(numstring1);   flo1 = atof(numstring2);      lon1=atol(numstring3);

    printf("\nnumstring1 =%s change to integer %d ",numstring1,in1);

    printf("\nnumstring2 =%s change to floating point %4.4f ",numstring2,flo1);

    printf("\nnumstring3 =%s change to long integer %d ",numstring3,lon1);

    printf("\nsummation of in1,flo1,lon1 is %6.4f ",in1+flo1+lon1);

    printf("\nsummation of atoi(numstring1),atof(numstring2),atol(numstring2) is %6.4lf:",atoi(numstring1)+atof(numstring2)+atol(numstring3));

    }


