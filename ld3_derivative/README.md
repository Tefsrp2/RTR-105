# 3. laboratorijas darbs
## Skaitliskā diferencēšana

#### Koda risinājums
```
#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, d, e, x;
    
    printf("Lūdzu ievadiet a vērtību:\n");
    scanf("%f", &a);
    printf("Lūdzu ievadiet b vērtību:\n");
    scanf("%f", &b);
    printf("Lūdzu ievadiet c (precizitātes) vērtību:\n");
    scanf("%f", &c);

 printf("        x  ||       atan(-x)    ||   atan\'(-x)      ||   atan\'(-x)      ||    atan\'\'(-x)    ||   atan\'\'(-x)  \n"
           "           ||                   ||analytical formula|| finite difference||analytical formula||finite difference\n"
           "    ===========================================================================================================\n");
  
   x = a;
   while(x < b){
       
       d=1/(pow(-x + c,2) + 1);
       e=1/(pow(-x,2) + 1);
       printf("%10.3f ||\t%10.3f\t||%10.3f\t   || %10.3f\t||%10.3f\t    ||%10.3f\n",x,atan(-x), 1/(pow(-x,2) + 1), (atan(-x) - atan(-x-c))/c, (-2 * (-x))/( pow(-x,4) +2 * pow(-x,2) + 1 ), (d-e)/c);
        x+=c;
   }
}
```
#### Kompilācijas rezultāti
![This is an image](https://github.com/Tefsrp2/RTR-105/blob/main/ld3_derivative/ld_3_result%20(2).png)

#### [Saite uz grafiku](https://github.com/Tefsrp2/RTR-105/blob/main/ld3_derivative/LD_3_grafiks.svg)
