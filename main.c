/*
 * Name:Amani Mung Tunje
 * Reg:CT100/G/26225/25
 * Discription:Mountly payment.
 * input -->hour and wage
 * Output-->gross_pay, tax and net_pay
 * tax rate 15% of first $600, 20% of the rest.
 */
#include <stdio.h>

int main()
{
    // variable declaration and initialization
    int hours;
    int wages;
    float grosspay;
    float taxes;
    float netpay;
    
    //prompt user to input the variable
    printf("Enter your hours of work:\t");
    scanf("%d",&hours);
    
    printf("Enter your weekly wages:\t");
    scanf("%d",&wages);
    
    //calculaing gross payed, taxes, and net payed per each worker
    if(wages<=600 && hours<=40){
        grosspay =hours * wages;
    }
    else{
        grosspay =(40 * wages) + ((hours - 40) * wages * 1.5);
    }
    taxes = grosspay * 0.2; //calculating taxes
    netpay =grosspay -taxes;//calculating net pay
    
    //displaying the results
    printf("Gross pay: %.2f\n",grosspay);
    printf("Taxes: %.2f\n",taxes);
    printf("Net pay: %.2f\n",netpay);
    return 0;
}