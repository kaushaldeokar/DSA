class Solution {
  public:
  
    vector<int> ans;
    
    void dfs(int s,vector<bool>&vis,vector<int> adj[]){
       ans.push_back(s);
       vis[s]=true;
       for(auto child:adj[s]){
           if(!vis[child]){
               dfs(child,vis,adj);
           }
       } 
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool>vis(V,0);
        for(int i=0;i<V;i++)if(!vis[i])dfs(i,vis,adj);
        return ans;
    }
