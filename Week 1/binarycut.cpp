#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=1;
        int p1=0;
        for(int i=0;i<s.size();i++){
            if(i>0){
            if(s[i]<s[i-1]){
                ans++;
            }}
            if(s[i]<s[i+1]){
                p1++;
            }
        }
        if(p1>1){
            ans=ans+p1-1;
        }
        cout<<ans<<endl;
 
    }
 
}