#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
void print_array (bool is_prime[], int n) {
    for(int index=0; index< n; index++){
        if(is_prime[index])
            printf("T ");
        else printf("F ");
    }
     printf("\n");
}
void sieve_of_eratosthenes(int n) {
    bool is_prime[n + 1];
    memset (is_prime, true, sizeof(is_prime));
    for(int i=2; i*i <= n; i++){
        if(is_prime[i] == true){
            for(int j=i*i; j <= n ; j+=i){
                is_prime[j] = false;
            }
        }
    }
    for (int i=2; i <= n ; i++){
        if(is_prime[i]){
            printf("%d ", i);

        }
    }
    return;
}

int main() {
    int n=0;
    printf("Enter a number:");
    scanf("%d", &n);
    sieve_of_eratosthenes(n);
    return 0;
}
