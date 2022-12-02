#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n!=1){
        if(n%2==0){
            cout<<n/2;
        }else{
            cout<<(n*3)+1;
        }
    }
    return 0;
}
