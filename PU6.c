#include <stdio.h>

void programmasSakums() {
    printf("Šī ir programma, kas veic elementārus aprēķinus \n ");
} //bez argumentiem, bez return

void ievaditaisSkaitlis(int skaitlis1, int skaitlis2)
{
    if (skaitlis1>skaitlis2)
    {
    printf("Lielakais no ievadītajiem skaitļiem: %d \n", skaitlis1);
    printf("Mazakais no ievaditajiem skaitļiem: %d \n", skaitlis2);
    }
    else
    {
        printf("Lielakais no ievaditajiem skaitliem: %d \n", skaitlis2);
        printf("Mazakais no ievadītajiem skaitļiem: %d \n", skaitlis1);
    }
} //ar argumentiem, bez return

float spriegums()   //bez argumentiem, ar return
{
  float u, r;
  float i;
  printf("Tagad programma aprēķinās strāvas stiprumu\n");
  printf("Ievadiet sprieguma vērtību (voltos): ");
  scanf("%f", &u);
  printf("Ievadiet pretestības vērtību (omos):  ");
  scanf("%f", &r);
  i = u/r;
  return i;

}

float spriegums2(float jauda, float spriegums) //ar argumentiem, ar return
   {
   float i1;
   i1 = jauda/spriegums;
   return i1;
   }


int main()
{
    programmasSakums();
    int a, b;
    float p1, u1;
    float i;
    printf("Ievadiet divus skaitļus: ");
    scanf("%d" "%d", &a, &b);
    ievaditaisSkaitlis(a, b);
    printf("Tas bija tests. Tagad programma veiks īstos aprēķinus\n");
    i = spriegums();
    printf("Strāvas stiprums (ampēros): %f \n ", i);
    printf("Tagad programma aprēķinās strāvas stiprumu pēc citas formulas\n");
    printf("Ievadiet jaudu (vatos): ");
    scanf("%f", &p1);
    printf("Ievadiet spriegumu (voltos): ");
    scanf("%f", &u1);
    printf("Strāvas stiprums (ampēros): %f\n", spriegums2(p1, u1));
    return 0;
}
