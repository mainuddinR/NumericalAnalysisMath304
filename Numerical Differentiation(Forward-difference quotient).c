#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define F(X) ((X)*(X)+1)
//#define Fp(X) (2*(X))
int main()
{
    double a=0.0,b=2.0;
    int n=10;
    double h=(b-a)/n;
    double X[n+1];
    double Y[n+1];
    double Fp[n+1];
    for(int i=0;i<=n;i++){
        X[i]=a+i*h;
        Y[i]=F(X[i]);
    }
    for(int i=0;i<=n;i++){
        Fp[i]=(Y[i+1]-Y[i])/h;
    }
    printf("i    X[i]      F(X[i])     F'(X[i])\n");
    for(int i=0;i<=n;i++){
       if(i!=n) printf("%d   %lf   %lf   %lf\n",i,X[i],Y[i],Fp[i]);
       else printf("%d   %lf   %lf   .......\n",i,X[i],Y[i]);
    }


        return 0;
}
