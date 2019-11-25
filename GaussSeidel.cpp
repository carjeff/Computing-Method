#include<iostream>
#include<math.h>
using namespace std;
#define max 50
void input(double a[max][max],double b[max],long n){
    cout<<"\n Please input the augmented matrix of the original equation system : ";
    for(long i = 0; i<=n-1; i++){
        for(long j=0; j<=n-1;j++){
            cin>>a[i][j];
        }
        cin>>b[i];
    }
}

void output(double x[max], long n){
    cout<<"\n The solution vector of the original system is: ";
    for(long i=0;i<=n-1;i++){
        cout<<x[i]<<" ";
    }
}


int main(){
    double a[max][max],b[max],x[max];
    long n,k;
    double accuracy,e,oldx,s;
    cout<<"\nPlease input the order of the original system: ";
    cin>>n;
    input(a,b,n);
    cout<<"\nPlease input the Iterative initial vector: ";
    for(long i=0; i<=n-1; i++){
        cin>>x[i];
        cout<<x[i];
    }
    long maxi;
    cout<<"\n Please input the max time : ";
    cin>>maxi;
    cout<<"\n Please input the accuracy: ";
    cin>>accuracy;
    for(k=1;k<maxi;k++){
        e=0;
        for(long j=0;j<=n-1;j++){
            oldx=x[j];
            s=0;
            for(long q =0; q<=n-1;q++){
                if(q!=j)
                    s+=a[j][q]*x[q];
            }
            x[j]=(b[j]-s)/a[j][j];
            if(e<fabs(oldx-x[j]))
                e=fabs(oldx-x[j]);
        }
        if (e<accuracy)
        {
            break;
        }
    }
    if(k<=maxi)
        output(x,n);
    else
    {
        cout<<"\n the time is beyound the limit."<<endl;
    }
    return 0;
    
}