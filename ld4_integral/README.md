# 4. laboratorijas darbs
## Skaitliskā integrēšana

#### Risinājuma apraksts
Šajā laboratorijas darbā tika apskatīta skaitliskās integrēšanas metode, kas ir integrāļa aptuvens aprēķins, izmantojot skaitliskas metodes. Precīzāk tika apskatītas 3 metodes - Taisnstūru metode, trapecu metode un Simpsona metode. 
##### Taisnstūru metode
Taisnstūra metode jeb viduspunktu metode ir vienkāršākā metode matemātikā, ko izmanto, lai aprēķinātu noteikta integrāļa tuvinājumu. Lai veiktu integrāļa aprēķinu, tiek izmantoti šādi elemenmti - h(augstums) un a,b(taisnstūra malu garumi), kā arī pati funkcija, kas šajā gadījumā ir atan(-x).
##### Trapecu metode
Trapecveida likumu var izmantot, lai atrisinātu jebkuras funkcijas noteikto integrāli. Tā aprēķina laukumu zem līknes, ko veido funkcija, sadalot to trapecveida formās, un tā ir mazāk precīza metode, salīdzinot ar Simpsona likumu.
##### Simpsona metode
Simpsona metode ir skaitliska metode, kas tuvina noteikta integrāļa vērtību, izmantojot kvadrātfunkcijas. Šī metode, salīdzinot ar visām laboratorijas darba gaitā apskatītajām metodēm, ir uzskatāma par visprecīzāko.

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

#### [Saite uz grafiku](https://github.com/Tefsrp2/RTR-105/blob/main/ld4_integral/LD_4_grafiks.svg)
#### [Saite uz pierādījuma attēlu no WolfrAlpha kalkulatora](https://github.com/Tefsrp2/RTR-105/blob/main/ld4_integral/ld_4_pieradijums.png)

#### Komentāri, secinājumi
Kopumā labpratorijas darbu ir izdevies labi izpildīt. Izveidotā programma ir aprēķinājusi integrāļa vērtības visām trim metodēm. Salīdzinot rezultātus ar wolframAlpha kalkukatora rezultātiem (attēls pievienots laboratorijas darba mapē), var spriest, ka vistuvākais rezultāts ir iegūts izmantojot taisnstūra metodi, bet vistālāk atrodas rezultāts, kas ir iegūts, izmantojot Simpsona metodi, kas ir pretēji teorijai. tika gan izmantots diezgan neliels intervāls. Jāņem gan vērā, ka dotā funkcija atan(-x) ir definēta noteiktā definīcijas apgabalā, līdz ar to intervāls nevar būt ļoti liels. Papildus vēl ir pievienots funkcijas grafiks ar aizkrāsoto laukumu.
