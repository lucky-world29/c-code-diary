//
// Created by abina on 04-08-2025.
//
/*Que 2 : A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%.
          Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged.
          Write a C program to Display total selling price, profit along with vat and service charge.
          To calculate the selling price, profit, VAT, and service charge, follow these steps:

         1) Calculate the selling price:

            Selling Price = Cost Price + Profit
            Selling Price = Rs. 3500 + (27% of Rs. 3500)

         2) Calculate the profit:
            Profit = Selling Price - Cost Price

         3) Calculate VAT:

            VAT = 12.7% of Selling Price

         4) Calculate Service Charge:

            Service Charge = 3.87% of Selling Price

*/
#include<stdio.h>
int main(){
   float cost_price=3500;
   float profit=0 , VAT=0 , service_charge=0,selling_price=0;

   profit         = cost_price * (cost_price*27/100);
   selling_price  = cost_price+profit;
   VAT            = selling_price*(12.7/100);
   service_charge = selling_price*(3.87/100);

   printf("Cost price is %.2f \n",cost_price);
   printf("Selling price is %.2f \n",selling_price);
   printf("VAT is %.2f \n",VAT);
   printf("Service charge is %.2f \n",service_charge);

}