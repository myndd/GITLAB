#include <stdio.h>

#include <ctype.h>

#include <conio.h>

main()

{

    char cha1 = 'M' ,cha2 ='3',cha3= '&';

    printf("\n %d is return value of isdigit\(cha1\) of %c",isdigit(cha1),cha1);

    printf("\n %d is return value of isdigit\(cha2\) of %c ",isdigit(cha2),cha2);

     printf("\n %d is return value of isalpha\(cha3\) of %c ",isalpha(cha3),cha3);

     printf("\n %d is return value of isalpha\(A\) of %c ",isalpha('A'),'A');

      printf("\n %d is return value of isalpha\('0'\) of %c ",isalpha('0'),'0');

       printf("\n %d is return value of isalpha\('$'\) of %c ",isalpha('$'),'$');

    printf("\n %d is return value of isalnum\(cha1\) of %c",isalnum(cha1),cha1);

    printf("\n %d is return value of isalnum\(cha2\) of %c ",isalnum(cha2),cha2);

    printf("\n %d is return value of isalnum\(cha3\) of %c ",isalnum(cha3),cha3);

    printf("\n %d is return value of isalnum\(A\) of %c ",isalnum('A'),'A');

    printf("\n %d is return value of isalnum\('0'\) of %c ",isalnum('0'),'0');

    printf("\n %d is return value of isalnum\('$'\) of %c ",isalnum('$'),'$');

    }
