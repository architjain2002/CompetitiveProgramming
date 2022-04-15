#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlength(char *str)
{
    int str_len = 0;
    while (str[str_len] != '\0')
    {
        ++str_len;
    }
    return str_len;
}

void func1(int str1_len, char *str1)
{
    if (str1_len % 2 == 0)
    {
        printf("%c\n", str1[(str1_len / 2) - 1]);
    }
    else
    {
        printf("%c\n", str1[(str1_len - 1) / 2]);
    }
}

void func2(int str1_len)
{
    char *strA;
    strA = (char *)malloc(sizeof(char) * str1_len);
    int i;
    for (i = 0; i < str1_len; i++)
    {
        strA[i] = 'A';
    }
    strA[i + 1] = '\0';
    for (i = 0; i < str1_len; i++)
    {
        printf("%c", strA[i]);
    }
}
int main(int argc, char *argv[])
{

    char *str1;
    str1 = (char *)malloc(sizeof(char) * 20);
    strcpy(str1, argv[1]);

    char str2[] = "fun";
    int str1_len = strlength(str1);

    for (int j = 0; str2[j] != '\0'; ++j, ++str1_len)
    {
        str1[str1_len] = str2[j];
    }
    str1[str1_len] = '\0';
    printf("%s\n", str1);
    func1(str1_len, str1);
    func2(str1_len);
    return 0;
}