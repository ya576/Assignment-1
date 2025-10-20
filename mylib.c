#include "mylib.h"
#include <stdio.h>
#include <math.h>
int reverseDigits(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
int isArmstrong(int num) {
    int temp = num, sum = 0, digits = 0;
    while (temp) { digits++; temp /= 10; }
    temp = num;
    while (temp) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == num;
}
int isAdams(int num) {
    int sq = num * num;
    int revNum = reverseDigits(num);
    int revSq = revNum * revNum;
    return sq == reverseDigits(revSq);
}
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}
int isPrimePalindrome(int num) {
    return isPrime(num) && num == reverseDigits(num);
}
