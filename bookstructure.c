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
    strcpy(book1.BookTitle,"Introduction To C Programming");
    strcpy(book1.BookAuthor,"JohnSmith");
    strcpy(book1.ISBN,"9780131103627");
    book1.Yearofpublication=2022;
    book1.Price=49.99;

printf("The BookTitle is:%s\n",book1.BookTitle);
printf("The BookAuthor is:%s\n",book1.BookAuthor);
printf("The ISBN is:%s\n",book1.ISBN);
printf("The Year Of Publication:%d\n",book1.Yearofpublication);
printf("The Bookprice is:%f\n",book1.Price);

    return 0;
}