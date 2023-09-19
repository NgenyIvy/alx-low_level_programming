#include "main.h"
#include <stdio.h>

int _atoi(char *s) {
    int sign = 1;
    int result = 0;
    int i = 0;

   
    while (s[i] == ' ' || s[i] == '\t') {
        i++;
    }

      if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9') {
  
        if (result > (2147483647 - (s[i] - '0')) / 10) {
              return (sign == 1) ? 2147483647 : -2147483648;
        }
        result = result * 10 + (s[i] - '0');
        i++;
    }

      return result * sign;
}

int main() {
    char str1[] = "12345";
    char str2[] = "-6789";
    char str3[] = "   42";
    char str4[] = "   -123abc";

    printf("%d\n", _atoi(str1)); 
    printf("%d\n", _atoi(str2)); 
    printf("%d\n", _atoi(str3)); 
    printf("%d\n", _atoi(str4)); 
    return 0;
}

