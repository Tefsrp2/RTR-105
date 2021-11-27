#include <stdio.h>
#include <math.h>

int main ()
{
  int a, b, c;
  char seciba;
  printf("Esiet sveicinati programma, kas sakarto 3 decimalus skaitlus augosa vai dilstosa seciba pec jusu izveles\n");
  printf("Vispirms izvelieties skaitlu kartosanas secibu\n");
  printf("Ja velaties skaitlus redzet augosa seciba, nospiediet 'A', ja dilstosa - 'D': ");
  scanf("%c", &seciba);
  printf("Tagad ievadiet 3 decimalus skaitlus: ");
  scanf("%d %d %d", &a, &b, &c);

  switch(seciba)
  {
  case 'A':
  if (a <= b && b <= c)
  {
    printf("%d, %d, %d",a,b,c);
  }
  else
  {
      if (a <= c && c <= b)
      {
      printf("%d, %d, %d",a,c,b);
    }
    else{

      if (b <= a && a <= c)
      {
        printf("%d, %d, %d",b,a,c);
      }
      else
      {
        if (b <= c && c <= a)
        {
         printf("%d, %d, %d",b,c,a);
        }
        else
        {
          if (c <= a && a <= b)
          {
            printf("%d, %d, %d",c,a,b);
          }
          else
          {
            if (a == b && b == c)
            {
              printf("%d, %d, %d",a,b,c);
            }
            else
            {
              printf("%d, %d, %d",c,b,a);
            }
          }
        }
      }
    }
}
      break;
  case 'D':
     if (a >= b && b >= c)
     {
    printf("%d, %d, %d",a,b,c);
  }
  else{

    if (a >= c && c >= b)
    {
      printf("%d, %d, %d",a,c,b);
    }
    else{

      if (b >= a && a >= c)
      {
        printf("%d, %d, %d",b,a,c);
      }
      else
      {
        if (b >= c && c >= a)
        {
         printf("%d, %d, %d",b,c,a);
        }
        else
        {
          if (c >= a && a >= b)
          {
            printf("%d, %d, %d",c,a,b);
          }
          else
          {
            if (a == b && b == c)
            {
              printf("%d, %d, %d",a,b,c);
            }
            else
            {
              printf("%d, %d, %d",c,b,a);
            }
          }
        }
      }
    }
}
   break;
}
return 0;
}
