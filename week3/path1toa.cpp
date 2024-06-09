int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> x(A+1);
    
    for (auto it : B) {
        int  a = it[0];
        int  b = it[1];
        x[a].push_back(b);
    }
    queue<int> q;
    q.push(1);
    
    vector<int> vis(A+1,0);
    vis[1]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        if (node == A) {
            return 1;
        }
        for(auto it:x[node]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
            }
        }
    }
    if(vis[A]){
        return 1;
    }
    return 0;
}
