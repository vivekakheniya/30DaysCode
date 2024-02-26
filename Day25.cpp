#include<iostream>
using namespace std;
int sum(int n,int array[]){
    if(n==0){
        return 0;
    }
    if(n==1){
        return array[0];
    }
    if(n>1){
    int k {};
    k=array[0]+sum(n-1,array+1);
    return k;
    }
}
int main(){
    int array[]={5,2,3,3,4};
    int arraysize= sizeof(array)/sizeof(array[0]); // gives the array size.
    int output = sum(arraysize,array);
    cout<<output;
}