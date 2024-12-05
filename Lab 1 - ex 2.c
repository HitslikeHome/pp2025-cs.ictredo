//FUNCTION findMax(maxPointer, a)
    //IF a > *maxPointer THEN
        //*maxPointer = a
    //END IF
//END FUNCTION

//DECLARE max AS INTEGER
//SET max = 5
//DECLARE a AS INTEGER
//SET a = 10

//CALL findMax(ADDRESS OF max, a)

//PRINT "The maximum value is: " + max




#include <stdio.h>


void findMax(int *max, int a) {
    if (a > *max) {
        *max = a;
    }
}
int main() {
    int max = 5; 
    int a = 10; 

    findMax(&max, a);
    printf("the maximum value is: %d\n, max")

    return 0;
}