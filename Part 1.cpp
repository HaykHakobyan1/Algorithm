#include <stdio.h>
#include <string.h>

int is_palindrome(const char* input_str) {
    int start_index = 0;                 
    int end_index = strlen(input_str) - 1;


    while (start_index < end_index) {
        if (input_str[start_index] != input_str[end_index]) {
            return 0; 
        }
        start_index++;
        end_index--;
    }

    return 1; 
}

int main() {
    char first_string[] = "racecar";
    char second_string[] = "hello";

    if (is_palindrome(first_string)) {
        printf("\"%s\" is a palindrome\n", first_string);
    }
    else {
        printf("\"%s\" is not a palindrome\n", first_string);
    }

    if (is_palindrome(second_string)) {
        printf("\"%s\" is a palindrome\n", second_string);
    }
    else {
        printf("\"%s\" is not a palindrome\n", second_string);
    }

    return 0;
}
