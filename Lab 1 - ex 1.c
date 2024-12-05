
//PSEUDOCODE:

//START

//DECLARE integer number
//DECLARE integer originalNumber
//DECLARE integer firstDigit
//DECLARE integer lastDigit
//DECLARE integer digitCount = 0

//PRINT "Enter an integer: "
//READ number

//SET originalNumber = number

//DECLARE integer isNegative = (number < 0)
//IF isNegative THEN
    //SET number = -number 
//END IF

//DECLARE integer temp = number
//WHILE temp > 0 DO
    //INCREMENT digitCount
    //SET temp = temp / 10 
//END WHILE

//SET firstDigit = number / (10 ^ (digitCount - 1))

//SET lastDigit = number % 10

//SET number = number % (10 ^ (digitCount - 1))
//SET number = number / 10 

//DECLARE integer exchangedNumber
//SET exchangedNumber = lastDigit * (10 ^ (digitCount - 1)) + number * 10 + firstDigit

//IF isNegative THEN
    //SET exchangedNumber = -exchangedNumber
//END IF

//PRINT "Original number: ", originalNumber
//PRINT "Exchanged number: ", exchangedNumber

//END





#include <stdio.h>
#include <math.h> 

int main() {
    int number, originalNumber, firstDigit, lastDigit, digitCount = 0; 
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; 
    
    int isNegative = (number < 0);
    if (isNegative) {
        number = -number; 
    }

   
    int temp = number; 
    while (temp > 0) {
        digitCount++;
        temp /= 10;
    }

   
    firstDigit = number / (int)pow(10, digitCount - 1);
    lastDigit = number % 10;

  
    number = number % (int)pow(10, digitCount - 1); 
    number = number / 10; 

    
    int exchangedNumber = lastDigit * (int)pow(10, digitCount - 1) + number * 10 + firstDigit;


    if (isNegative) {
        exchangedNumber = -exchangedNumber;
    }

    printf("Original number: %d\n", originalNumber);
    printf("Exchanged number: %d\n", exchangedNumber);
    
    return 0;
}

