#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point",
	  " abc defg "
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

<<<<<<< HEAD
   return 0;
}

int add(int x,int y){return x+y;}
=======
   return 2;
}
>>>>>>> f02cecfa8f677bb2697af6497e2b5fea2b600f66
