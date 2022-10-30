#include<stdio.h>

int main()
{
  int pass, fail, grade, i;
  pass = 0;
  fail = 0;
  i = 1;

  while(i<=5){
   printf ("Please enter the grade: ");
   scanf("%d", &grade);
   if(grade >=40) 
   pass++;
   else fail++;

   i++;
  }

  printf("No of pass student  %d \n", pass );
  printf("NO of fail student %d",fail );

}

