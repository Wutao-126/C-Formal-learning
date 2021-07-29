#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


bool isPalindrome(char* s) {
    int lens = strlen(s);
    char* str = (char*)malloc(sizeof(char) * lens);
    int i = 0;
    while (*s)
    {
        if (isalnum(*s))
        {
            if (isupper(*s))
            {
                *s = tolower(*s);
            }
            str[i++] = *s;
        }
        s++;
    }
    int left = 0;
    int right = i - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    free(str);
    str = NULL;
    return true;
}

int main()
{
    char str[] = "A man, a plan, a canal: Panama";
    bool ret = isPalindrome(str);
    return 0;
}