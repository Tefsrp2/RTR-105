# 4. laboratorijas darbs
## Skaitliskā integrēšana

#### Koda risinājums
```
#include <stdio.h>
#include <math.h>


void main(){
float a,b,c,h,eps,integr1=0,integr2, integr3, integr4;
int k,n=2;

printf("Ludzu ievadiet a vertību: \n");
scanf("%f", &a);
printf("Ludzu ievadiet b vertibu: \n");
scanf("%f", &b);
printf("Lūdzu ievadiet precizitates vertibu: \n");
scanf("%f", &eps);


 integr2=-(b-a)*(-atan((a+b)/n)/2);
	while(fabs(integr2-integr1)>eps){
		n*=2;
		h=(-b-(-a))/n;
		integr1=integr2;
		integr2=0;
	
		for(k=0;k<n;k++)
			integr2+=-h*atan(-a+(k+0.5)*h);
			
	}
	integr3=-(b-a)*(-atan((a+b)/n)/2);
	while(fabs(integr3-integr1)>eps){
		n*=2;
		h=(-b-(-a))/n;
		integr1=integr3;
		integr3=0;
	
		for(k=0;k<n;k++)
	
		    integr3=((-h)*atan(-a+k*h)+atan(-a+(k+1)*h))/2;
	
}
   integr4 = -(b-a)*(-atan((a+b)/n)/2);
    while(fabs(integr4-integr1)>eps)
    {
        n *= 2;
        h = (-b-(-a))/n;
        integr1 = integr4;
        integr4 = 0;
        for(k=0;k<n;k++)
        {
            integr4 += (-h)/3*(atan(-a)+4*(atan(-a)+atan(-b)/n)+atan(-b));
        }
    }
printf("Integrala vertiba pec taisnsturu metodes: %f\n",integr2);
printf("Integrala vertiba pec trapecu metodes: %f\n", integr3);
printf("Integrala vertiba pec Simpsona metodes: %f\n", integr4);
}
```

#### Kompilācijas rezultāti
![This is an image](https://github.com/Tefsrp2/RTR-105/blob/main/ld4_integral/ld_4_result.png)

#### Saite uz grafiku [Grafiks] https://github.com/Tefsrp2/RTR-105/blob/main/ld4_integral/LD_4_grafiks.svg
#### Saite uz pierādījuma attēlu no WolfrAlpha kalkulatora [Grafiks] https://github.com/Tefsrp2/RTR-105/blob/main/ld4_integral/ld_4_pieradijums.png

