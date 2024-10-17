// c arrays - 3 Dimensional arrays for matrix
/*
Name: Fiona Wanjiku
Reg no:CT101/G/25189/24
Date: 15/10/24
*/
#include <stdio.h>
int main () {
    int a,b,c;
    int marks[2][2][3]={{{60,70,40,},{80,70,25}},{{40,50,60},{45,67,89}}};
    for (a=0;a<2;a++){
      for(b=0;b<2;b++){
        for(c=0;c<3;c++){
        printf("marks[%d][%d][%d]=%d\n",a,b,c,marks[a][b][c]);
        }  
      }
    }
  return 0;
}
