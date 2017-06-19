# include <stdio.h>
# include <math.h>
int main()
{
   long long n,t,sum;
   scanf("%lld",&t);
   for( ;t;t--)
   {
       scanf("%lld",&n);
       sum = (sqrt(1+8*n)-1)/2;
       printf("%lld\n",sum);
   }
    return 0;
}
