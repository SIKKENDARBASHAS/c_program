#include<stdio.h>
#include<stdlib.h>
int main()
{
char a[50];
char b[50];
char c[20]={'&','!','@','#','$','%','*','(',')','+','-','.',',','_'};
scanf("%s", &a);
//printf("%s" ,a);
int u=0;
for(int i=0;i<='/0';i++)
{
    for(int j=0;j<=strlen(c);j++)
    {
    if(a[i]>='A' && a[i]<='Z' || a[i]==c[i])
    {
        b[u]=a[i];
        u++;
    }
    }
}
for(int i=0;i<=strlen(b);i++)
{
printf("%c", b[i]);
}
 //printf("%c",b[0]);
}
