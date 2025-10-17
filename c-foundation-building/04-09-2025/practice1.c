//
// Created by abina on 04-09-2025.
//


/*
 *1 6 11 16 21
 *2 7 12 17 22
 *3 8 13 18 23
 */

/*
 11111
 00000
 11111
 00000
 */

#include<stdio.h>
int main() {
 int k;
 for (int row=1;row<5;row++) {
  for (int col=1;col<5;col++) {
   if (row%2!=0)
    printf("%d",1);

   else
    printf("%d",0);

  }
  printf("\n");
 }
}