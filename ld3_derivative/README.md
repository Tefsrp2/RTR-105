# 3. laboratorijas darbs
## Skaitliskā diferencēšana

#### Risinājuma apraksts
Skaitliskā dieferncēšana ir process, kurā tiek atrasta noteiktas funkcijas atvasinājuma skaitliskā vērtība noteiktā punktā. Laboratrijas darba norsises gaitā tika meklēti dotās funkcijas: atan(-x) pirmās un otrās kārtas atvasinājumi noteiktos punktos, kā skaitliskajam atvsinājumam, tā arī analītiskajai formulai.

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

#### Komentāri, secinājumi
Kopumā ir izdevies izpildīt šo laboratorijas darbu. Spriežot pēc grafikā attēlotjiem datiem, pirmās kārtas atvasinājumus programma ir aprēķinajusi pareizi, jo, atbilstoši lekcijā dotjajam teorijas materiālam, izpildās apgalvojums, ka iegūtās vērtības atrodas nelielā attālumā starp vienu un otru variantu. Tāpat ir pieejams derivative.dat fails, kurā ir attēlotas programmas izpildes gaitā iegūtās vērtības, kā arī grafiks, kurā salīdzinājumam, ir pieejams arī dotās funkcijas atan(-x) grafiks.

