#include <stdio.h>
#include <string.h>
/* infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result or 0 if the result cannot fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int carry = 0;
    int i = 0;    
    int j = 0;  
    int k = 0; 

    reverse_string(n1);
    reverse_string(n2);

    while (n1[i] != '\0' || n2[j] != '\0' || carry != 0)
    {
        int digit1 = (n1[i] != '\0') ? n1[i] - '0' : 0;
        int digit2 = (n2[j] != '\0') ? n2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;  
        int digit = sum % 10;

        if (k < size_r - 1) {
            r[k] = digit + '0';
            k++;
        } else {
        
            return 0;
        }

	if (n1[i] != '\0') {
            i++;
        }
        if (n2[j] != '\0') {
            j++;
        }
    }

    r[k] = '\0';
    reverse_string(r);

    return r;
}
