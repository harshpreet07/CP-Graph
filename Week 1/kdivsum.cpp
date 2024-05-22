#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long i=2;
        while(k/n==0){
            k=k*i;
            i++;
        }
        if(k%n==0){
            cout<<k/n<<endl;
            continue;
        }
        else{
            cout<<(k/n)+1<<endl;
        }
    }
}
