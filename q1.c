#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{float x;
double summand=1,sourat,makhraj,s=0,total=0;
int i=0,sign=1;
  printf("Enter x as a float number and 0.0<x<1.0: \n");
  scanf("%f",&x);
  if (x>0 && x<1)
    {while(summand>1E-4)
     {i++;
     sourat=pow(x,2*(i-1));
     makhraj=sign *(pow(x,i)/i);
     total+=makhraj;
     summand= sourat/total;
     s += sign * summand;
     sign= -sign;}

   printf("S=%f\n",s);}
  else
  {printf("invalid\n");}
    return 0;}
