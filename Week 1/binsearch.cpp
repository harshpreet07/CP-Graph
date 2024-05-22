#include<iostream>
using namespace std;

int solve(int a[],int x,int start,int high){
    if(high<start){
        return -1;
    }
    int mid=(high+start)/2;
    if(a[mid]==x){
        return mid;
    }
    if(x<a[mid]){
        return solve(a,x,start,mid-1);
    }
    if(x>a[mid]){
        return solve(a,x,mid+1,high);
    }

}

int main(){
   int a[] = {3, 4, 6, 7, 9, 12, 16, 17};
    cout<<solve(a,6,0,7);
}