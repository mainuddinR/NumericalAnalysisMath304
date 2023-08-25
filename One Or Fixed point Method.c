#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define F(X) ((X)*(X)*(X)+4*(X)*(X)-10)
#define g(X) sqrt(10-((X)*(X)*(X)))/2
#define epns 10e-6
#define max 200
int main()
{
    double a=1.5;

    int i=1;
    printf("iter      x0         x1        g(x0)       f(x1)   \n");
    while(i<max)
    {
        double b=g(a);
        double fb=F(b);
        printf("%d    %lf    %lf    %lf    %lf\n",i,a,b,b,fb);
        if(fabs(fb)<=epns){
            printf("Root :%lf\n",b);
            return 0;
        }
        a=b;
        i++;
    }
    return 0;
}
