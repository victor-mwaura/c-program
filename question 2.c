/*
C program that prompts user for customer id, customer name,
and units consumed and calculates the total bill 
*/

#include <stdio.h>

int main()
{
    int CID, units, charge_per_unit;
    char CName[100];
    float charges;
    printf("Enter Customer ID : ");
    scanf("%d", &CID);
    printf("Enter Units Consumed : ");
    scanf("%d", &units);
    printf("Enter Customer Name : ");
    scanf("%s", CName);
    if (units < 199){
        printf("Below minimum");
    }
    if (units <= 199){
        charge_per_unit = 120;
        charges = (float) units * charge_per_unit * 1.15;
        printf("\nCustomer ID : %d", CID);
        printf("\nCustomer name : %s", CName);
        printf("\nUnits Consumed : %d", units);
        printf("\nCharges per unit : %d", charge_per_unit);
        printf("\nTotal Amount(Kshs) : %.2f", charges);
    }
    else if (units >= 200 && units < 400)
    {
      charge_per_unit = 150;
      charges = (float) units * charge_per_unit * 1.15;
      printf("\nCustomer ID : %d", CID);
      printf("\nCustomer name : %s", CName);
      printf("\nUnits Consumed : %d", units);
      printf("\nCharges per unit : %d", charge_per_unit);
      printf("\nTotal Amount(Kshs) : %.2f", charges);
    }
    else if (units >= 400 && units < 600)
    {
        charge_per_unit = 180;
        charges = (float) units * charge_per_unit * 1.15;
        printf("\nCustomer ID : %d", CID);
        printf("\nCustomer name : %s", CName);
        printf("\nUnits Consumed : %d", units);
        printf("\nCharges per unit : %d", charge_per_unit);
        printf("\nTotal Amount(Kshs) : %.2f", charges);
    }
    else if (units >= 600)
    {
        charge_per_unit = 200;
        charges = (float) units * charge_per_unit * 1.15;
        printf("\nCustomer ID : %d", CID);
        printf("\nCustomer name : %s", CName);
        printf("\nUnits Consumed : %d", units);
        printf("\nCharges per unit : %d", charge_per_unit);
        printf("\nTotal Amount(Kshs) : %.2f", charges);
    }
    else if (charges < 100){
        printf("Below minimum");
    }
    return 0;
}