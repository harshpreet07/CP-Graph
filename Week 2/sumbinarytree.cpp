#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long ans=x;
        while(x>0){
            x=x/2;
            ans+=x;
        }
        cout<<ans<<endl;
    }
}