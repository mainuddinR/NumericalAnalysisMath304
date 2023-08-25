#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define F(X) ((X)*(X)+1)
int main()
{
    double a=0.0,b=2.0;
    int n=10;
    if(n%2!=0) n=n+1;//if n is odd
    double dx=(b-a)/n;
    double X[n+1];
   // X[0]=a;
    double sum=0.0;
    for(int i=0;i<=n;i++){
        X[i]=a+dx*i;
        if(i==0||i==n){ // first and last
            sum=sum+(dx/3)*F(X[i]);
        }
        else if(i%2!=0){// i is odd
            sum=sum+(dx/3)*4*F(X[i]);
        }
        else if(i%2==0){ // i is even
             sum=sum+(dx/3)*2*F(X[i]);
        }
    }
    printf("simpson's 1/3 Rule......\n");
    printf("Integral value: %lf\n",sum);
    return 0;
}

