//program to prompt the user to enter values of when to start and when to stop using do while loop
/*
Author:Fiona Wanjiku
Reg No:CT101/G/25189/24
Date: 10/10/2024
*/
#include<stdio.h>
int main(){
    int start,stop,sum=0;
    printf("input the value to start:");
    scanf("%d",&start);
    printf("input the value to stop:");
    scanf("%d",&stop);
    do {printf("%d\n",start);
  sum=sum+start;
  sum+=start;
  start++;
  }
  while(start,start<=stop);
  
  printf("The sum %d",sum);
  return 0;
}