#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define F(X) ((X)*(X)*(X)+4*(X)*(X)-10)
#define Fp(X) (3*(X)*(X)+8*(X))
#define epns 10e-6
int main()
{
    double a;
    a=1.5;
    int i=1;
     printf("iter     x0         x1        f(x0)       fp(x0)          f(x1)\n");
    while(1)
    {
        double fa=F(a);
        double fpa=Fp(a);
        double b=a-(fa/fpa);
        double fb=F(b);
        printf("%d    %lf    %lf    %lf    %lf      %lf\n",i,a,b,fa,fpa,fb);
        if(fabs(fb)<=epns){
            printf("Root: %lf\n",b);
            return 0;
        }
        a=b;
        i++;
    }
    return 0;
}
