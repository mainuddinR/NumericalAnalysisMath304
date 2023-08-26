#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define F(X) ((X)*(X)+1)
int main()
{
    double a=0.0,b=2.0;
    int n=10;
    double h=(b-a)/n;
    double X[n+1];
    double Y[n+1];
    double Fp[n+1];
    X[0]=a;
    X[n]=b;
    for(int i=1; i<n; i++)
        X[i]=X[i-1]+h;

    for(int i=0;i<=n;i++)
        Y[i]=F(X[i]);

    for(int i=0; i<=n; i++)
    {
        Fp[i]=(Y[i]-Y[i-1])/h;
    }
    printf("i    X[i]      F(X[i])     F'(X[i])\n");
    for(int i=0; i<=n; i++)
    {
        if(i!=0) printf("%d   %lf   %lf   %lf\n",i,X[i],Y[i],Fp[i]);
        else printf("%d   %lf   %lf   .......\n",i,X[i],Y[i]);
    }

    return 0;
}

