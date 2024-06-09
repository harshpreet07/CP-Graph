#include<bits/stdc++.h>
using namespace std;

vector<int> topsort(int v,vector<int> adj[]){
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++){
    for(auto it:adj[i]){
        indegree[it]++;
    }
    }
    vector<int> ans;
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node=q.front();
        ans.push_back(node);
        q.pop();
        for(auto it:adj[node]){
            indegree[it]--;
        }
        for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
        }
    }
    return ans;
}