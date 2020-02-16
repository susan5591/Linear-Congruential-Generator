#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x[100],a,c,m,choose,i,j,flag=0;
    float R;
    printf("Enter the X0,m,a,c:");
    scanf("%d%d%d%d",&x[0],&m,&a,&c);
    for(i=0;i<m;i++)
    {
        x[i+1]=(a*x[i]+c)%m;
        printf("%d\t",x[i+1]);
        R=(float)x[i+1]/m;
        printf("%f\n",R);
        for(j=0;j<i+1;j++)
        {
            if(x[i+1]==x[j])
            {
                flag=1;
                break;
            }
            j++;
        }
        if(flag==1)
            break;
    }
}
