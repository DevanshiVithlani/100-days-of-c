#include<stdio.h>
int main()
{
    int t;
    printf("Enter Time in Seconds %d",t);
    scanf("%d",&t);

    int h;
    h=(t/3600);
    
    int m;
    m=((t%3600)/60);
    
    int s;
    s=(t%60);
  
   printf("%d:%d:%d", h, m, s);
    return 0;
}