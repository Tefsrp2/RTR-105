# 2. laboratorijas darbs
## Roots

#### Risinājuma apraksts
Šajā laboratorijas darbā tika apskatīta dihotmijas metode, lai dotajai funkcijai atrastu saknes.  
text align: justify
Dihotomijas metode ir saknes noteikšanas metode, kas attiecas uz visām nepārtrauktajām funkcijām , kurām ir zināmas divas vērtības ar pretējām zīmēm. Metode sastāv no šo vērtību definētā intervāla atkārtotas sadalīšanas uz pusēm un pēc tam atlasot apakšintervālu, kurā funkcija maina zīmi, un tāpēc tai ir jāsatur sakni. Tā ir ļoti vienkārša metode, taču tā ir arī salīdzinoši lēna. 

#### Koda risinājums
```
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, x, delta_x, funkca, funkcb;
    int k=0;

    printf("Lūdzu ievadiet a vērtību: \n");
    scanf("%lf", &a);
    printf("Lūdzu ievadiet b vērtību: \n");
    scanf("%lf", &b);
    printf("Lūdzu ievadiet c vērtību:\n");
    scanf("%lf", &c);
    printf("Lūdzu ievadiet precizitātes vērtību: \n ");
    scanf("%lf", &delta_x);

    funkca = atan(-a)-c;
    funkcb = atan(-b)-c;

    if(funkca*funkcb < 0){
		printf("Intervala [%lf; %lf] atan(-x) funkcijai.", a, b);
		printf(" Saknju nav vai ir para skaits saknu, vai ir sakne, kas pieskaras x-asij\n");
		return 1;
	}

	while((b-a) > delta_x){
			k++;
		x = (a+b)/2;
		if(funkca*(atan(-x)-c) > 0)
			a = x;
		else
			b = x;
	}
	printf("%2d. iterācija: atan(-%lf)=%lf\t",k,a,atan(-a));
	printf("atan(-%lf)=%lf\t",x,atan(-x));
	printf("atan(-%lf)=%lf\n",b,atan(-b));

	printf("Sakne atrodas pie x=%lf, jo atan(-x) ir %lf\n",x,atan(-x));

	return 0;
}
```

#### Kompilācijas rezultāti
![This is an image](https://github.com/Tefsrp2/RTR-105/blob/main/ld2_roots/ld_2_result.png)



#### [Saite uz grafiku](https://github.com/Tefsrp2/RTR-105/blob/main/ld2_roots/LD_2_grafiks_2.svg)
