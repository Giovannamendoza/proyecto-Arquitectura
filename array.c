#include<stdio.h>
#define n 12

int a[n]={1,4,2,5,6,7,8,10,21,45,7,10};


void findEvenNumbers (int *a, int size)
{
  for(int i=0; i<size; i++)
  {
     if(a[i]%2 == 0)
        findEvenNumbers= a[i];
  }
}

void findOddNumbers(int a[], int size)
{
  for(int i=0; i<size; i++)
  {
     if(a[i]%2 != 0)
     findOddNumbers=a[i];
  }
}

int main(){

     findEvenNumbers(a, n);

     findOddNumbers(a, n);

   return 0;
}
