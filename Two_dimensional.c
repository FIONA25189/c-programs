// c arrays - 2 Dimensional arrays for matrix
/*
Name: Fiona Wanjiku
Reg no:CT101/G/25189/24
Date: 15/10/24
*/
#include <stdio.h>
int main () {
    int a,b;
    int marks[2][3]= {{60,70,40,},{80,70,25}};
    for (a=0;a<2;a++){
      for(b=0;b<3;b++){
         printf("marks[%d][%d]=%d\n",a,b,marks[a][b]);
      }
    }
  return 0;
}
