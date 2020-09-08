#include<iostream>
using namespace std;

int main(){
    int number=0;
    double d=20.2;
    int *p=&number;
    double *pd=&d;

    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<sizeof(number)<<","<<sizeof(d)<<endl;
    cout<<sizeof(d)<<","<<sizeof(pd)<<endl;
    return 0;
}