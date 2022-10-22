#include<bits/stdc++.h>

using namespace std;

int main(){

    int a[5]={5,3,2,1,4};
    int n=5;
    sort(a,a+n);
    int i;

    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}