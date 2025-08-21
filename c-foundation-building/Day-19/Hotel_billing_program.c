//
// Created by abina on 18-08-2025.
//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int qty,op,amt=0;
    abc:
    //clrscr();
    puts("********************************************************************");
    puts("\t\t\t HOTEL SAI BALAJI");
    puts("\t\t\t AMEERPET - HYD");
    puts("********************************************************************");
    puts("\t\t 1. Tea - 10/-");
    puts("\t\t 2. Coffee / Milk / Boost / Lemon Tea / Water Bottle -20/-");
    puts("\t\t 3. Idly / Bonda / Plain dosa / Upma / Poha - 30/-");

    puts("\t\t 4. Sambar idly / wada / Onion / Masala dosa / Poori -40/-");
    puts("\t\t 5. Sambar wada / Veg Biryani / Panner dosa - 50/-");
    puts("\t\t 6. Bill");
    puts("\t\t 7. Cancel");
    puts("\t\t 8. Close");
    puts("********************************************************************");
    printf("\t\t Enter Ur option[ ]\b\b"); scanf("%d",&op);
    if(op>=1 && op<=5){printf("Enter Quantity: ");
    scanf("%d",&qty);}
    switch(op)
    {
    case 1: amt+=qty*10;break;
    case 2: amt+=qty*20;break;
    case 3: amt+=qty*30;break;
    case 4: amt+=qty*40;break;
    case 5: amt+=qty*50;break;

    case 6: printf("Ur billed amount:%d",amt);amt=0;getch();break;
    case 7: printf("Ur order cancelled");amt=0;getch();break;
    case 8: printf("Application Terminated"); getch(); exit(0);
    }
    goto abc;
    }