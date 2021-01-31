#include <stdio.h>

long long convertDecimalToBinary(int n);

int main(void) {
    int num1 = 0, num2 = 0;
    long long bNum1 = 0, bNum2 = 0;
    int dNum1LeftShiftResult = 0;

    long long bNum1ComplementResult = 0;
    long long bNum2ComplementResult = 0;
    long long bNum1ANDNum2Result = 0;
    long long bNum1ORNum2Result = 0;
    long long bNum1XORNum2Result = 0;
    long long bNum1LeftShiftResult = 0;

    printf("Enter an interger: "); // input number from user
    scanf("%d", &num1);

    printf("Enter another integer: "); // input second number from user
    scanf("%d", &num2);

    bNum1 = convertDecimalToBinary(num1);
    bNum2 = convertDecimalToBinary(num2);

    bNum1ComplementResult = convertDecimalToBinary(~num1);
    bNum2ComplementResult = convertDecimalToBinary(~num2);

    bNum1ANDNum2Result = convertDecimalToBinary(num1 & num2);
    bNum1ORNum2Result = convertDecimalToBinary(num1 | num2);
    bNum1XORNum2Result = convertDecimalToBinary(num1 ^ num2);

    dNum1LeftShiftResult = num1 << 2;
    bNum1LeftShiftResult = convertDecimalToBinary(dNum1LeftShiftResult);

    printf("The results of applying the ~ operator on number %d (%lld) is: %lld \n", num1, bNum1, bNum1ComplementResult);
    printf("The results of applying the ~ operator on number %d (%lld) is: %lld \n", num2, bNum2, bNum2ComplementResult);
    printf("The results of applying the & operator on number %d (%lld) and number %d (%lld) is: %lld \n", num1, bNum1, num2, bNum2, bNum1ANDNum2Result);
    printf("The results of applying the | operator on number %d (%lld) and number %d (%lld) is: %lld \n", num1, bNum1, num2, bNum2, bNum1ORNum2Result);
    printf("The results of applying the ^ operator on number %d (%lld) and number %d (%lld) is: %lld \n", num1, bNum1, num2, bNum2, bNum1XORNum2Result);
    printf("The results of applying left shift operator << on number %d (%lld) by 2 places is number %d (%lld) \n", num1, bNum1, dNum1LeftShiftResult, bNum1LeftShiftResult);
    
    return 0;
}

long long convertDecimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1;

    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }

    return binaryNumber;
}