#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define F(X) ((X)*(X)+1)
int main()
{
    double a=0.0,b=2.0;
    int n=10;
    double dx=(b-a)/n;
    double X[n+1];
   // X[0]=a;
    double sum=0.0;
    for(int i=0;i<=n;i++){
        X[i]=a+dx*i;
        if(i==0||i==n)
        sum=sum+(dx/2)*F(X[i]);
        else{
            sum=sum+dx*F(X[i]);
        }
    }
    printf("Trapezoidal Rule......\n");
    printf("Result: %lf\n",sum);
    return 0;
}
