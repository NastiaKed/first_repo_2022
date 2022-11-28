#include <stdio.h>

char* kyrdypluk(char* str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}
int main()
{
    char str[50];
    printf("Please enter string ");
    gets_s(str);
    kyrdypluk(str);
    printf("result : %s", str);
}
