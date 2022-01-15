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
printf("\t                  _______   * >         2   k             *  |    2  | , visiem |x| =< 1    \n");
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
