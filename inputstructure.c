//program to define a structure book
/*
Name: Fiona Wanjiku
Reg NO:CT101/G/25189/24
Date:18/10/24
*/

#include<stdio.h>
#include<string.h>
struct book
{
  char BookTitle[30];
  char BookAuthor[30];
  char ISBN[13];
  float Price;
  int Yearofpublication;  
}book1,book2;

int main(){
    //struct book book1,book2
    printf("Input the Book Title:");
    scanf("%s",&book1.BookTitle);
    printf("The BookTitle is %s\n",book1.BookTitle);

    printf("Input the BookAuthor:");
    scanf("%s",&book1.BookAuthor);
    printf("The BookAuthor is %s\n",book1.BookAuthor);
    
    printf("Input the ISBN:");
    scanf("%s",&book1.ISBN);
    printf("The ISBN is %s\n",book1.ISBN);

    printf("Input the Yearofpublication:");
    scanf("%d",&book1.Yearofpublication);
    printf("The Year Of Publication is %d\n",book1.Yearofpublication);

    printf("Input the Bookprice:");
    scanf("%f",&book1.Price);
    printf("The Bookprice is %f\n",book1.Price);

    return 0;
}