#include <stdio.h>

int main()
{
    char s1[20] = "Hello World";
    char *ps1;
    ps1 = &s1[0]; // or ps1 = s1;
    int x = strlen1(ps1);
    printf("%d", x);
}

int strlen1(s) // s is a pointer variable. s = &str
char *s; //
{
    int n;
    for (n=0; *s != '\0'; s++) // '\0' has single quotes
    // increment pointer variable as long as the value of it
    // does not become \0
    {
        n++;
    }
    return (n);
}


