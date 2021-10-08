# RTR-105
Datormācība (pamatkurss) elektroniskā klade


#include<stdio.h>
int main()
{
int a;
long long int c, b;

printf("Cienījamais lietotāj, lūdzu ievadi pirmo skaitli: ");
scanf("%d", &a);
printf("Cienījamais lietotāj, lūdzu ievadi otro skaitli: ");
scanf("%lli", &b);

c=a*b;
printf("Rezultāts pēc ievadīto skaitļu reizināšanas: %lli \n", c);

return 0;
}


