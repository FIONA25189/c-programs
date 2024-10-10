//program to calculate and display the electricity bill for a given customer
/*
Author:Fiona Wanjiku
Reg No:CT101/G/25189/24
Date: 10/10/2024
*/
#include<stdio.h>
int main(){
    int customerid,unitconsumed;
    char customername[]={};
    float chargesperunit,TotalAmounttopay;
    
    printf("Input the customerid:");
    scanf("%d",&customerid);
    printf("The customerid is %d\n",customerid);

    printf("Input the customername:");
    scanf("%s",&customername);
    printf("The customer name is %s\n",customername);

    printf("Input the unit consumed:");
    scanf("%d",&unitconsumed);
    printf("The unit consumed is %d\n",unitconsumed);
    
    
    if(unitconsumed==0)
          {chargesperunit=0;}

    else if(unitconsumed<=199)
           {chargesperunit=1.20;}

    else if (unitconsumed>=200 & unitconsumed<400)
             {chargesperunit=1.50;}

    else if (unitconsumed>=400 & unitconsumed<600)  
             {chargesperunit=1.80;}                

    else if  (unitconsumed>=600)
              {chargesperunit=2.00;}

    else {printf("No charges charged");}

    printf("The chargesperunit is %f\n",chargesperunit);

    TotalAmounttopay=unitconsumed*chargesperunit;

    if(TotalAmounttopay<100)
       {TotalAmounttopay=100;}

    else if(TotalAmounttopay>400)
        {TotalAmounttopay=TotalAmounttopay*1.15;}

  else {
    printf("No surcharged fee\n");
       }

   printf("The TotalAmount to pay is %f\n",TotalAmounttopay);

return 0;

} 