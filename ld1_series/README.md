# 1. laboratorijas darbs
## Teilora rindas

#### Risinājuma apraksts
Matemātikā Teilora rindas ir bezgalīga terminu summa, kas vienā punktā ir izteikta kā funkcijas atvasinājumi. Šajā laboratorijas darbā tiek meklēta dotās funkcijas atan(-x) vērtība. Tiek izmantoti šādi elementi. Rekurences reizinātāja aprēķins, kā arī virknes elementu summas aprēķins. 

#### Koda risinājums
```
#include <stdio.h>
#include <math.h>
 double mans_atan (double x){
    double a,S;
    int k=0;
    a = (-x)/sqrt(1+pow(x,2))*1;
    S=a;
    printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

    while(k<500){
        k++;
         a = a*pow((2*k-1),2)/((2*k+1)*(2*k))*(pow(x,2)/(1+pow(x,2)));
        S=S+a;
        printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
    }
    return S;
}

void main (){
  double x, y;
	printf("atan(-x) aprekinasana:\n");
	printf("Ievadiet argumentu x, kurs ir pozitivs un mazaks par 1: ");
	scanf("%lf\n", &x);
	y = atan(-x);
	printf ("Atan(-x) vertiba: y = arctan (%.2lf )=%.8lf \n" , x , y);

  printf(" \n");
printf("\t                            500 \n");
printf("\t                           ______                                    k    \n");
printf("\t                           \                                  /    2 \      \n");
printf("\t               ~     -x     \        (2*k)!                  |   x   |      \n");
printf("\t       atan(x) - ___________ \     ____________________      | ______|       \n");
printf("\t                  _______   * >         2   k             *  |    2  | ,   \n"); //visiem |x|=<1
printf(" \t                /      2    /      (k!) * 4 * (2*k+1)       | 1+x   |                \n");
printf("\t               \/ 1 + x     /                                 \     /                   \n");
printf("\t                           /_____                                                         \n");
printf("\t                             k=0                                                   \n");
printf("\n");
printf("\n");
printf("\t                                  2        2             \n");
printf("\t                           (2*k-1)       x         \n");
printf("\t Rekurences reizinatajs: ———————————— * ———   \n");
printf(" \t                                          2     \n");
printf(" \t                         2*k*(2*k+1)   1+x                \n");
printf("\t                                                     \n");
}
```
#### [Saite uz grafiku](https://github.com/Tefsrp2/RTR-105/blob/main/ld1_series/LD_1_grafiks_2.svg)

#### Komentāri, secinājumi
Kopumā atan(-x) vērtība ir noteikta pareizi. Ievadot šādu vērtību kalkulatorā, tā sakrīt ar programmā atgriezto vērtību. Vienīgi nav izdevies attēlot ar ASCII zīmēšanu funkcijas un rekurences reizinātāja formulas. Nedaudz augstāk ir pievienota saite uz daotās funkcijas atan(-x) grafiku. Teksta komentāra veidā ir uzrakstīts arī funkcijas definīcijas apgabals.
