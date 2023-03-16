#include <stdio.h>
#include <stdlib.h>

char* createCharArray(int size, char value) {
    char* array = (char*) malloc(size * sizeof(char)); // Allocate memory for the array
    
    for(int i=0; i<size; i++) {
        array[i] = value; // Initialize each element with the given value
    }
    
    return array;
}

int main() {
    char* myArray = createCharArray(10, 'A'); // Create an array of 10 chars, initialized with 'A'
    
    // Print the contents of the array
    for(int i=0; i<10; i++) {
        printf("%c ", myArray[i]);
    }
    
    free(myArray); // Free the memory allocated for the array
    
    return 0;
}
