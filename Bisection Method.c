#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define F(x) ((x)*(x)*(x)+4*(x)*(x)-10)
#define epns 10e-6
#define max 200
int main()
{
    double a=1.25,b=1.5,c;
    //scanf("%lf%lf",&a,&b);
    int i;
    double fa,fb,fc;
    printf("......................................................................................\n");
    printf("    a           b           F(a)            F(b)            c=(a+b)/2           F(c)\n");
    printf("......................................................................................\n");
    for(i=0; i<max; i++)
    {
        c=(a+b)/2;
        fa=F(a);
        fb=F(b);
        fc=F(c);
        printf("%lf       %lf       %lf       %lf       %lf       %lf\n",a,b,fa,fb,c,fc);
        if(fabs(F(c))<=epns)
        {
            printf("Root: %lf\nitr:%d\n",c,i+1);
            return EXIT_SUCCESS;
        }
        if(fa*fc>=0)
        {
            a=c;
        }
        else
        {
            b=c;
        }

    }

    return EXIT_FAILURE;
}
