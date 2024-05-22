#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// long long search(vector<long long> a,long long x){
//     long long l,h,mid;
//     l=0;
//     h=a.size()-1;
//     long long ans;            
//     ans=h;
//     while(l<=h){
//         mid=(l+h)/2;
//         if(a[mid]>=x){
//         ans=mid;
//         h=mid-1;    
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     return ans;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long> a(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        vector<long long> b(k);
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        while(q--){
            long long d;
            cin>>d;
            if(d==0){
                cout<<"0"<<" ";
                continue;
            }
            long long time;
            auto it=lower_bound(a.begin(),a.end(),d);
            long long x2;
            x2=it-a.begin();
            cout<<x2<<" ";
            long long x1;
            x1=x2-1;
            
            if(x2==0){
                time=d*b[x2]/a[x2];
                cout<<time<<" ";
                continue;
            }
            if(a[x2]==d){
                cout<<b[x2]<<" ";
                continue;
            }
            time=b[x1]+((d-a[x1])*(b[x2]-b[x1]))/(a[x2]-a[x1]);
            cout<<time<<" ";
        }
        cout<<endl;
    }
}