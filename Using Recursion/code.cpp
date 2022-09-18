#include<bits/stdc++.h>
using namespace std;
void getSum(int sum, int i, int n){
    if(i==n+1) return;
    cout<< i+sum << endl;
    sum=sum+i;
    i++;
    getSum(sum,i,n);    
}

int main(){

    int sum=0;
    int i=1;
    int n;
    cin>>n;

    getSum(sum,i,n);

    return 0;
}
