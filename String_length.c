// finding the length of a string using a user-defined function

#include <stdio.h>
#include<string.h>

// The User-defined method
int str_length(char str[]) {
    // initializing count variable (stores the length of the string)
    int count; 
    
    // incrementing the count till the end of the string
    for (count = 0; str[count] != '\0'; ++count);
    
    // returning the character count of the string
    return count; 
}

// Driver code
int main() {
    // initializing the array to store string characters
    char str[1000]; 
 
    // inputting the string
    printf("Enter the string: ");
    scanf("%s", str); 
    
    // assigning the count of characters in the string to the length of the string
    int length = str_length(str); 
    
    //  printing the length of string
    printf("The length of the string is %d", length); 
  
  // using strlen();
    printf("The length of the string is %d", strlen(str); 
 
    return 0;
}
