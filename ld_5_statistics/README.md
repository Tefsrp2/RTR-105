Koda risinājums
```
#include <stdio.h>

void kartosana();
void printArray();

int main(){
	int skaitlis, i, j;
	float videjais, mediana;
	int rinda[8];
	for(skaitlis=1;skaitlis<9;skaitlis++){
		printf("Ludzu ievadiet %d.skaitli:",skaitlis);
		scanf("%d",&rinda[skaitlis]);
	}
	int n = sizeof(rinda)/sizeof(rinda[1]);
	kartosana(rinda, n);
	printf("Sakartota rinda: \n");
	printArray(rinda, n);
	int Sum=0;
	for(int i=0;i<n;i++)
        Sum=Sum+rinda[i];
	videjais = Sum/n;
    mediana = (rinda[4]+rinda[5])/2;
	int moda, moda2;
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(rinda[j]==rinda[j+1]){
				moda = rinda[j];
			}
			else{
                moda2=0;
			}
		}
	}
	for(int i=0;i<n;i++){
        Sum=Sum+rinda[i];
	videjais = Sum/n;
	}
	printf("Rindas mazakaa vertiba ir: %d\n",rinda[1]);
	printf("Rindas lielaakaa vertiba ir: %d\n",rinda[9]);
	printf("Videja vertiba ir: %f\n",videjais);
	printf("Medianas vertiba ir: %f\n",mediana);
        printf("Modas vertiba ir: %d\n", moda);
        printf("Modas vertiba ir: %d\n", moda2);
	return 0;
}

void kartosana(int rinda[], int n){
	int i, j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(rinda[j]>rinda[j+1]){
				int temp = rinda[j];
				rinda[j] = rinda[j+1];
				rinda[j+1] = temp;
			}
		}
	}
}

void printArray(int rinda[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d", rinda[i]);
	}
}
```
