#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int k=0;
int l=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        k+=i;
    }
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        l+=j;
    }
    if((n==l)&&(m==k))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}