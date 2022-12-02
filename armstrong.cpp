#include<math.h>
using namespace std;
int main(){
    int n, sum=0,last=0;
    cin>>n; int original=n;
    while(n!=0){
        cout<<"n is now "<<n<<endl;
        last=n%10;
        cout<<"last is now "<<last<<endl;
        cout<<"puwer of last is "<<pow(last,3)<<endl;
        n=n/10;
        cout<<"n is now "<<n<<endl;
        sum+=pow(last,3);
        cout<<"sum is now "<<sum<<endl;
    }
    if(original==sum){
        cout<<" armstrong number";
    }else{
        cout<<" not armstrong number";
    }
    return 0;
}