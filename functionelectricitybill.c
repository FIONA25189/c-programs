//program to calculate and display the electricity bill for a given customer using functions
/*
Author:Fiona Wanjiku
Reg No:CT101/G/25189/24
Date: 16/10/2024
*/
#include<stdio.h>
int product(int x,int a,int b);//function prototype
int multiplication(int x);//function prototype
int main(){
   // a= unitconsumed, b= chargesperunit, x= TotalAmounttopay
    int customerid,a;
    char customername[]={};
    float b,x;
    
    printf("Input the customerid:");
    scanf("%d",&customerid);
    printf("The customerid is %d\n",customerid);

    printf("Input the customername:");
    scanf("%s",&customername);
    printf("The customer name is %s\n",customername);

    printf("Input the value of a:");
    scanf("%d",&a);
    printf("The value of a is %d\n",a);
    
    
    
    if(a==0)
          {b=0;}

    else if(a<=199)
           {b=1.20;}

    else if (a>=200 & a<400)
             {b=1.50;}

    else if (a>=400 & a<600)  
             {b=1.80;}                

    else if  (a>=600)
              {b=2.00;}

    else {printf("No charges charged");}

    printf("The value of b is %f\n",b);

    x=a*b;

    if(x<100)
       {x=100;}

    else if(x>400)
        {x=x*1.15;}

  else {
    printf("No surcharged fee\n");
       }

   printf("The The value of x is %f\n",x);

return 0;

} 

// function defination
int product(int a,int b,int x){
   x=a*b;
   return x;
}

// function defination
int multiplication(int x){
   x=x*1.15;
   return x;
}