#include <stdio.h>
#include <stdlib.h>

int main () {
    int n = 0;
    printf("Enter Rows: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--){
            printf(" ");
        }
        for(int j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
