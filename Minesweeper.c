#include<stdio.h>
int main()
{
    char field[100][101];
    int i,j,k,l,c,m,n,f=1;

    while(scanf("%d%d",&n,&m)&&(n||m))
    {
        if(f>1)    printf("\n");
        for(i=0;i<n;i++)
            scanf("%s",field[i]);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(field[i][j]=='.')
                {
                    c=0;
                    for(k=i-1;k<=i+1;k++)
                        for(l=j-1;l<=j+1;l++)
                            if(k>=0&&k<n&&l>=0&&l<m&&field[k][l]=='*')
                                c++;

                    field[i][j]=c+48;
                }
        printf("Field #%d:\n",f++);
        for(i=0;i<n;i++)
            printf("%s\n",field[i]);
    }
    return 0;
}

