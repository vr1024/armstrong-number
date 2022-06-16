//
//  main.c
//  ArmstrongNumber
//
//  Created by Vibhaw on 06/05/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int number, once, thenth, hundred, army;

    printf("Enter a three digit number: ");
    scanf("%d", &number);

    once = number/100;

    thenth = (number%100)/10;

    hundred = number%10;

    army = once*once*once + thenth*thenth*thenth + hundred*hundred*hundred;

    if (number == army) {
        printf("The number is armstrong\n");
    }else
        printf("The nuber is NOT armstrong\n");

    return 0;
}





