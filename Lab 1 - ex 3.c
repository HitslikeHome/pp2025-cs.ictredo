// BEGIN

//     STRUCT complex
//         FLOAT real
//         FLOAT imaginary
//     END STRUCT

//     FUNCTION add(c1: complex, c2: complex) -> complex
//         DECLARE result AS complex
//         result.real = c1.real + c2.real
//         result.imaginary = c1.imaginary + c2.imaginary
//         RETURN result
//     END FUNCTION

//     FUNCTION multiply(c1: complex, c2: complex) -> complex
//         DECLARE result AS complex
//         result.real = c1.real * c2.real - c1.imaginary * c2.imaginary
//         result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real
//         RETURN result
//     END FUNCTION

//     FUNCTION printComplex(c: complex)
//         PRINT c.real + " + " + c.imaginary + "i"
//     END FUNCTION

//     FUNCTION main()
//         DECLARE cnum1, cnum2, sum, product AS complex

//         PRINT "Enter the real and imaginary parts of the first complex number: "
//         READ cnum1.real, cnum1.imaginary

//         PRINT "Enter the real and imaginary parts of the second complex number: "
//         READ cnum2.real, cnum2.imaginary

//         sum = add(cnum1, cnum2)
//         product = multiply(cnum1, cnum2)

//         PRINT "Sum: "
//         CALL printComplex(sum)
//         PRINT "Product: "
//         CALL printComplex(product)
//     END FUNCTION

// END






#include <stdio.h>

struct complex {
    float real;
    float imaginary;
};

struct complex add(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

struct complex multiply(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

void printComplex(struct complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}

int main() {
    struct complex cnum1, cnum2, sum, product;

    printf("Enter the real and imaginary parts of the first complex number: \n");
    scanf("%f %f", &cnum1.real, &cnum1.imaginary);

    printf("Enter the real and imaginary parts of the second complex number: \n");
    scanf("%f %f", &cnum2.real, &cnum2.imaginary);

    sum = add(cnum1, cnum2);
    product = multiply(cnum1, cnum2);

    printf("Sum: ");
    printComplex(sum);
    printf("Product: ");
    printComplex(product);

    return 0;
}