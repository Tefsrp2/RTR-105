#include <stdio.h>
#include <math.h>


void main(){
float a,b,c,eps,h,integr1=0,integr2, integr3;
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
	
		    integr3=-h*atan(-a+k*h)+atan(-a+(k+1)*h)/2);
	
}
printf("Integrala vertiba pec taisnsturu metodes: %f\n",integr2);
printf("Integrala vertiba pec trapecu metodes: %f\n", integr3);
}
