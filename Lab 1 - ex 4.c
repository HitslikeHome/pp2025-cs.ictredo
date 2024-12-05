// FUNCTION is_prime(num):
//     IF num <= 1 THEN
//         RETURN 0  
//     END IF

//     FOR i FROM 2 TO sqrt(num) DO
//         IF num MOD i == 0 THEN
//             RETURN 0  
//         END IF
//     END FOR

//     RETURN 1 
// END FUNCTION

// FUNCTION is_sphenic(n):
//     DECLARE primes[100] 
//     SET prime_count = 0   

//     // Find all primes less than or equal to n
//     FOR i FROM 2 TO n DO
//         IF is_prime(i) THEN
//             primes[prime_count] = i  
//             INCREMENT prime_count
//         END IF
//     END FOR

//     // A sphenic number must have exactly 3 distinct prime factors
//     IF prime_count < 3 THEN
//         RETURN 0  
//     END IF

//     // Check for products of three distinct primes
//     FOR i FROM 0 TO prime_count - 1 DO
//         FOR j FROM i + 1 TO prime_count - 1 DO
//             FOR k FROM j + 1 TO prime_count - 1 DO
//                 SET product = primes[i] * primes[j] * primes[k]
//                 IF product == n THEN
//                     RETURN 1
//                 END IF
//             END FOR
//         END FOR
//     END FOR

//     RETURN 0  
// END FUNCTION

// FUNCTION main():
//     DECLARE number

//     PRINT "Enter a number: "
//     READ number

//     IF is_sphenic(number) THEN
//         PRINT number + " is a sphenic number."
//     ELSE
//         PRINT number + " is not a sphenic number."
//     END IF
// END FUNCTION












#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int is_sphenic(int n) {
    int primes[100];
    int prime_count = 0;


    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            primes[prime_count++] = i;
        }
    }

    if (prime_count < 3) {
        return 0;
    }

 
    for (int i = 0; i < prime_count; i++) {
        for (int j = i + 1; j < prime_count; j++) {
            for (int k = j + 1; k < prime_count; k++) {
                int product = primes[i] * primes[j] * primes[k];
                if (product == n) {
                    return 1; 
                }
            }
        }
    }
    return 0; 
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_sphenic(number)) {
        printf("%d is a sphenic number.\n", number);
    } else {
        printf("%d is not a sphenic number.\n", number);
    }

    return 0;
}