void dfs(Node*copy,Node*node,vector<Node*>&vis){
        vis[copy->val]=copy;
        for(auto x:node->neighbors){
            if(vis[x->val]==NULL){
                Node*temp=new Node(x->val);
                (copy->neighbors).push_back(temp);
                dfs(temp,x,vis);
            }else (copy->neighbors).push_back(vis[x->val]);
        }
    }
    Node* cloneGraph(Node* node) {
        if(!node)return NULL;
        Node*copy=new Node(node->val);
        vector<Node*>vis(1000,NULL);
        dfs(copy,node,vis);
        return copy;
    }
