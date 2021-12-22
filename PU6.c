#include <stdio.h>

void f1(){

printf("Programmas darbība tiek uzsākta.\n\n");
}
void f2(int f2_num){
        if(f2_num==6){
        
        printf("Lieliski! Visi uzdevumi ir izpildīti. Tagad laiks ķerties klāt laboratorijas darbiem.\n");
         }
         if(f2_num<6){
        
          printf("Diemžēl neesat izpildījis visus programmēšanas uzdevumus. Tos vēl var paspēt izpildīt līdz 31.12.2021.\n");
        }
        if(f2_num>6){
            printf("Jūs esat pārcenties. Tik daudz uzdevumu nemaz nav, taču tas ir labs zināšanu un prasmju papildinājums.\n.");
        }
}

int f3(){
int f3_num;

printf("Tagad, lūdzu, ievadiet paredzamo laiku stundās 1 laboratorijas darbam: ");
  scanf("%d",&f3_num);

return f3_num;
}

int f4(int f3_out){
int f4_out;
f4_out = f3_out*2;
return f4_out;
}

int main(){

f1();

int f2_num;

printf("Lūdzu, ievadiet izpildīto programmēšanas uzdevumu skaitu.\n");
  scanf("%d",&f2_num);
  f2(f2_num);

  int f3_out;

printf("Šajā programmas daļā būs jāievada cits skaitlis.\n.\n.\n.\n");

  f3_out = f3();

printf("Trešajā funkcijā tika ievadīts šāds stundu skaits - %d\n\n",f3_out);
  int f4_out;

printf("Ievadītais skaitlis tiks divkāršots.\n\n");
  f4_out = f4(f3_out);

printf("Faktiskais stundu skaits 1 laboratorijas darba izstrādei varētu būt: %d\n",f4_out);
return 0;
}
