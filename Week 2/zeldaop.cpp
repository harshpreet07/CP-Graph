#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int x;
        cin>>x;
        vector<int> count(x,0);
        for(int i=0;i<x-1;i++){
            int a,b;
            cin>>a>>b;
            count[a-1]++;
            count[b-1]++;

        }
        int ans=0;
        
        for(int i=0;i<x;i++){
            if(count[i]==1){
                ans++;
            }
        }
        cout<<(ans+1)/2<<endl;}
}