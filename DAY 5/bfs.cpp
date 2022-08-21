vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<bool>vis(V);
        vector<int>ans;
        queue<int>q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int vertex=q.front();q.pop();
            ans.push_back(vertex);
            for(auto child:adj[vertex]){
                if(!vis[child]){q.push(child);vis[child]=1;}
            }
        }
        return ans;
    }
