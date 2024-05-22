const long long mod=1000000009;

int power(long long x, int y, int m) {
    long long ans = 1;
    for (int i = 0; i < y; i++) {
        ans *= x;
        if (ans > m) {
            return 1; 
        }
    }
    if (ans == m) {
        return 0; 
    } else {
        return -1; //kam hai
    }
}


int NthRoot(int n, int m) {
  // Write your code here.
    int x1=1;
    int x2=m;
    long long mid;
    if(n==1){
      return m;
    }
    while(x2>=x1){
      
      mid=(x1+x2)/2;
      int p=power(mid,n,m);
      if(p==-1){
        x1=mid+1;
      }
      else if(p==1){
        x2=mid-1;
      }
      else{
        return mid;
      }

    }
    return -1;
}

