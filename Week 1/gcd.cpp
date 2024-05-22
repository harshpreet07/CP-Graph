#include<iostream>
using namespace std;

//euclid algorithm 1
        // int gcd1(int a,int b){
        //     while(a!=b){
        //         if(a>b){
        //             a=a-b;
        //         }
        //         else{
        //             b=b-a;
        //         }
        //     }
        //     return a;
        // }

//modified
    int gcd2(int a,int b){
        if(b==0){
            return a;
        }
        else{
            return gcd2(b,a%b);
        }
    }

int main(){
    int a,b;
    cin>>a>>b;
    // int ans;
    // for(int i=min(a,b);i>=1;i--){
    //     if(a%i==0 && b%i==0){
    //         ans=i;                  //O(n)
    //         break;
    //     }
    // }
    // cout<<ans;


    }