#include<stdio.h>
int main()
{
long int a, b;
long long int c;

printf("Cienījamais lietotāj, lūdzu ievadi pirmo skaitli: ");
scanf("%ld", &a);
printf("Cienījamais lietotāj, lūdzu ievadi otro skaitli: ");
scanf("%ld", &b);

c=a*b;
printf("Rezultāts pēc ievadīto skaitļu reizināšanas: %lli \n", c);

return 0;
}
