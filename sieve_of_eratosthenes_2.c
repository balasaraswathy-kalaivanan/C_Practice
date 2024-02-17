#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Nmax 100001
bool is_prime[Nmax];

void sieve_of_eratosthenes(int n){
    memset(is_prime, true, n+1);
    for(int i=2; i <= n/2 ; i++){
        if(is_prime[i]) {
            for(int j=i*2; j<=n; j+=i) {
                is_prime[j] = false;
            }
        }
    }
    return;
}
int main () {
    int n=0;
    printf("Enter a number");
    scanf("%d", &n);
    sieve_of_eratosthenes(n);
    for (int i=2; i<=n; i++){
        if(is_prime[i])
            printf("%d ", i);
    }
    return 0;
}
