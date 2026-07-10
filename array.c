#include <stdio.h>

int main() {
    int myNumbers[] = {25, 50, 75, 100};

  
    printf("%d\n", myNumbers[0]); // Outputs the first element: 25
    printf("%d\n", myNumbers[2]); // Outputs the third element: 75

  
    myNumbers[0] = 33;            // Changes 25 to 33
    printf("%d\n", myNumbers[0]); // Outputs: 33

    return 0;
}
