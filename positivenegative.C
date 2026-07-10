#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); 
    if( 0<num) {
        printf("%d is positive.\n", num);
    } else {
        printf("%d is negative.\n", num);
    }
    
    return 0;
}
