#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double sum=0,sum2,max=A[0],min=A[0];
    for(int i=0;i<N;i++){
        sum+=A[i];
        sum2+=A[i]*A[i];
        if(max<A[i])max=A[i];
        if(min>A[i])min=A[i];
    }
    B[0]=sum/N;
    B[1]=sqrt((sum2/N)-(B[0]*B[0]));
    B[2]=max;
    B[3]=min;
}
