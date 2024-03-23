#include <stdio.h>
int main()
{
    int t, i;
    long int a,b,c, moves=0;
    scanf("%d", &t);
    for(i=1; i <=t; i++)
    {
    scanf("%ld%ld", &a,&b);
    if(b>a)
    {
        b-=a;
    moves = b/10;
    if(b%10>0)
        {
        moves++;
        }
    }
    else
    {
        c=a;
        a=b;
        b=c;
        b-=a;
        moves = b/10;
        if(b%10>0)
        {
        moves++;
        }
    }
        printf("%d\n", moves);
    }
}
