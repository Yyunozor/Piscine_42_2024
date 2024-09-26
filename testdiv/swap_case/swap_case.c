

char *swap_case(char *str) {
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') 
		{

            str[i] = str[i] + 32;
        } 
		else if (str[i] >= 'a' && str[i] <= 'z') 
		{

            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}

#include <stdio.h>

char *swap_case(char *str);

int main(void) {
    char str[] = "Hello, World!";

    printf("Original: %s\n", str);
    printf("Swapped : %s\n", swap_case(str));

    return 0;
}