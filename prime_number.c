
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool isPrime (int n) {
    // upper limit: n-1 or n/2 or sqrt(n)
    for(int i=2; i<sqrt(n); i++){
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n=0;
    bool result = false;
    printf("Enter a number:");
    scanf("%d", &n);
    result = isPrime(n);
    result==true ? printf("%d is a prime number", n) : printf("%d not a prime number", n);
    return 0;
}
