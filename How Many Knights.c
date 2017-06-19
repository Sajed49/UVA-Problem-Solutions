#include<stdio.h>
int main(){
    int m,n;
    long int p;
    while(scanf("%d %d",&m,&n)==2){
        int c, d;
        if(!m && !n) break;
        p=m*n;

        if(m>n) {
            c=n;
            d=m;
        }
        else {
            c=m;
            d=n;
        }

        if(c==1) printf("%d knights may be placed on a %d row %d column board.\n",n,m,n);
        else if(c==2 && d%2) printf("%d knights may be placed on a %d row %d column board.\n",d+1,m,n);
        else if(c==2 && d%4) printf("%d knights may be placed on a %d row %d column board.\n",c+d,m,n);
        else if(c==2 && !(m%4)) printf("%d knights may be placed on a %d row %d column board.\n",m,m,n);
        else if(!(p%2)) printf("%ld knights may be placed on a %d row %d column board.\n",p/2,m,n);
        else printf("%ld knights may be placed on a %d row %d column board.\n",(p+1)/2,m,n);
    }
    return 0;
}
