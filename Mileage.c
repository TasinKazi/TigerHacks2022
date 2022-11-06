#include<stdio.h>

int  main(void)
{
 float totalmiles;
 float carmilege;
 float totalgallons;
 float AverageGasPrice = 3.79;
 float CostofTrip;
 
 
 
    printf("\nWelcome to Trip Calculator: ");
    printf(" \nWhat is the total number of miles of your trip: "); 
    scanf( "%f", &totalmiles );

    printf(" \nWhat is your cars gas mileage?  : ");
    scanf("%f", &carmilege);
    

    totalgallons =  totalmiles / carmilege;

    printf("\nThe total number of gallons for your trip is %f: ", totalgallons);
    
    CostofTrip = totalgallons * AverageGasPrice;

    printf("\nTotal cost of trip based on average US gas price is : %f", CostofTrip);
    printf("\n Note: This is assuming you have a full tank of gas and have just started your trip:\n");
    printf(" \nThank you for using Trip Calculator\n");

    





}