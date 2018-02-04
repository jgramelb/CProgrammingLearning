/* We are going to calculate our weekly pay:
-Asks user to enter the number of hours worked in a week via keyboard
-The program should display output as gross pay, the taxes, and the net pay

Assumptions:
-Basic pay rate = $12/hr
-Overtime is time and a half (40+ hours)
-Tax rate: 15% of the first $300, 20% of the next $150, 25% of the rest
*/

#include <stdio.h>

int main()
{
    float hoursentered;
    float basicpayrate = 12.00;
    float regularpay;
    float grosspay;
    float overtimehours;
    float overtimepay;

    printf("\nPlease enter hours worked in a week: ");
    scanf("%f", &hoursentered);
    //printf("\nYou entered %f", hoursentered);
    //printf("\nYour basic pay rate is: $%.2f", basicpayrate);

    //Formulas for regular vs overtime pay
    regularpay = hoursentered * basicpayrate;
    overtimehours = (hoursentered - 40);
    overtimepay = (40*basicpayrate)+ (overtimehours*1.5*basicpayrate);

    //Formulas used to calculate taxes for regular pay
    float taxlessthan300;
    float taxbtwn300450;
    float tax15;
    float tax20;
    float taxreg25;
    float taxover25;
    taxlessthan300 = regularpay * 0.15;
    taxbtwn300450 = (regularpay-300)*0.20;
    tax15 = 300 * 0.15;
    tax20 = 150 * 0.20;
    taxreg25 = (regularpay-300-150)*0.25;
    taxover25 = (overtimepay-300-150)*0.25;


    //Calculate the gross pay, taxes
    if (hoursentered <0 ){
        printf("\nPlease enter 0 or more hours");
    }
    if (hoursentered <= 40) {
        printf("\nYour gross pay is: $%.2f", regularpay);


        if (regularpay <= 300){
            printf("\nYou will be taxed: $%.2f", taxlessthan300);
            printf("\nYour net pay is: $%.2f", regularpay - taxlessthan300);
        }
        if(regularpay > 300 && regularpay <= 450){
            printf("\nYou will be taxed: $%.2f", taxbtwn300450 + tax15);
            printf("\nYour net pay is: $%.2f", regularpay - (taxbtwn300450 + tax15));
        }
        if (regularpay > 450){
            printf("\nYou will be taxed: $%.2f", taxreg25+tax20+tax15);
            printf("\nYour net pay is: $%.2f", regularpay - (taxreg25+tax20+tax15));
        }

    }
    if (hoursentered > 40){
        printf("\nYour gross pay is: $%.2f", overtimepay);
        printf("\nYou will be taxed: $%.2f", taxover25+tax20+tax15);
        printf("\nYour net pay is: $%.2f", overtimepay - (taxover25+tax20+tax15));
    }




}
