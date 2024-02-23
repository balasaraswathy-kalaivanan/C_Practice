#include <stdio.h>
#include <stdlib.h>

int main () {
    int rows = 0, cols = 0;
    printf("Enter Rows: ");
    scanf("%d", &rows);
    printf("Enter Columns: ");
    scanf("%d", &cols);
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
