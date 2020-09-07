#include<iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int list[]={1,2,3,4,5,6,7,8,9,10};
    int list2[10];
    int length=sizeof(list)/sizeof(int);
    cout<<length<<endl;

    for(auto &i :list2){
        cout<<i<<" ";
    }

    for(int i=0; i<length; i++){
        list2[i]=list[i];
    }

    for(auto &i : list2){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}