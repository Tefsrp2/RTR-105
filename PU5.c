#include <stdio.h>

int main()
{   
    int skaitlis, tips;
    printf("Esiet sveicinati programmā, kas aprēķina faktoriālu atbilstoši Jūsu izvēlētajam skaitlim\n");
    printf("Vispirms, lūdzu ievadiet vienu decimālu skaitli: ");
    scanf("%d", &skaitlis);
    printf("Lūdzu izvēlieties datu tipu - char-1, int-2, long long-3: ");
    scanf("%d", &tips);
    
    if (tips == 1)
    {  
        char a = skaitlis, f;
        char b = 1;
        if (skaitlis > 0 )
        {
              for (;skaitlis > 0;)
            {  
                f = b;
                b = skaitlis * b;
                skaitlis = skaitlis-1;
                if (f>b) break;
            }
             if (f>b)
                {
                    printf ("Programmas darbība ir pārtraukta, jo Jūsu izvēēttē skaitļa faktoriāla vērtība neatbildīs izvēlētajam datu tipam.");
                }
                 else
                {
                    printf ("Faktoriāls no %hhd ir %hhd", a, f); 
                }
        }
            else
            {
                printf("Faktoriāls no 0 = 1");
            }
    }
    if (tips == 2 )
    {
        int a = skaitlis, f;
        int b = 1;
             if (skaitlis > 0 )
        {
                for (;skaitlis > 0;)
                {  
                    f = b;
                    b = skaitlis * b;
                    skaitlis = skaitlis-1;
                    if (f>b) break;
                }        
                if (f>b)
                {  
                    printf ("Programmas darbība ir pārtraukta, jo Jūsu izvēlētē skaitļa faktoriāla vērtība neatbildīs izvēlētajam datu tipam.");
                }
                else
                {
                    printf ("Faktoriāls no %d ir %d", a, f); 
                }
        }
            else
            {
                printf("Faktoriāls no 0 = 1");
            }
    }
    if (tips == 3)
    {
        long long a = skaitlis, f;
        long long b = 1;
        if (skaitlis > 0 )
        {
            for (;skaitlis > 0;)
            {  
                f = b;
                b = skaitlis * b;
                skaitlis = skaitlis-1;
                if(f>b) break;
            }
            if (f>b)
            {
                printf ("Programmas darbība ir pārtraukta, jo Jūsu izvēlētē skaitļa faktoriāla vērtība neatbildīs izvēlētajam datu tipam.");
            }
            else
            {
                printf ("Faktoriāls no %lld ir %lld", a, f); 
            }
        }
            else
            {
                printf("Faktoriāls no 0 = 1");
            }
    }
    
return 0;
}
