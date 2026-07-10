#include <stdio.h>

int main() {
    int grades[] = {85, 92, 78, 99, 88};
    
    
    int length = sizeof(grades) / sizeof(grades[0]); 

  
    for (int i = 0; i < length; i++) {
        printf("Element at index %d: %d\n", i, grades[i]);
    }
    return 0;
}
