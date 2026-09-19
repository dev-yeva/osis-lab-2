#include "revert_string.h"

#include <string.h> 

void RevertString(char *str)
{
    int l = 0;
    int r = strlen(str) - 1;

    while (l < r) {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
}
