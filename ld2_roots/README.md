# 2. laboratorijas darbs
## Roots
Koda risinājums
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
/blob/main/ld2_roots/ld_2_result.png



### Saite uz grafiku [Grafiks] https://github.com/Tefsrp2/RTR-105/blob/main/ld2_roots/LD_2_grafiks_2.svg
