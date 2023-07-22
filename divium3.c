#include<stdio.h>
 int main()
 {
 int n,i,dis,c=0;
 scanf("%d %d",&n,&dis);
  int order[n];
  for(i=0;i<n;i++)
  {
  scanf("%d",&order[i]);
  if(order[i]>0 && dis%order[i]==0)
   c++;
   }
    printf("%d",c);
    }
