#include <stdio.h>
#include "mmath.h"

long fact (int a){
    if (a == 0)
        return 1;
    else
        return a * fact(a - 1);
}

long nchoosek (int n, int k){
    return fact(n) / (fact(k) * fact(n - k));
}

int prime (long n){
    int i;
    for (i=2; i<n; i++) {
        if (n % i == 0 && i != n) return 0;
    }
    return 1;
}

int gcd (int a, int b){
    while (a != b){
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return b;
}

int lcm (int a, int b){
    return (a * b) / gcd(a, b);
}

char bitrevc (char c){
    c = (c & 0b11110000) >> 4 | (c & 0b00001111) << 4;
    c = (c & 0b11001100) >> 2 | (c & 0b00110011) << 2;
    c = (c & 0b10101010) >> 1 | (c & 0b01010101) << 1;
    return c;
}



