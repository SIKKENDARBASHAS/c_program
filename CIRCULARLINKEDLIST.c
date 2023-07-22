#include <stdio.h>
#include <string.h>
int strings(char s[], char goal[])
{
    int len = strlen(s);
    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = i+1; j < len; j++)
        {
            if (s[i] == goal[j] && s[j] == goal[i])
            {
                printf("TRUE");
            }
            else
            {
                printf("FALSE");
            }
        }
    }
    return 0;
}

int main() {
    char s[] = "aa";
    char goal[] = "bb";
    int result = strings(s, goal);
    return 0;
}
#include <stdio.h>
#include <string.h>
int strings(char s[], char goal[])
{
    int len = strlen(s);
    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = i+1; j < len; j++)
        {
            if (s[i] == goal[j] && s[j] == goal[i])
            {
                printf("TRUE");
            }
            else
            {
                printf("FALSE");
            }
        }
    }
    return 0;
}

int main() {
    char s[] = "aa";
    char goal[] = "bb";
    int result = strings(s, goal);
    return 0;
}
