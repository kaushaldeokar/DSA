if(n.size()==0||n.size()==1)return n.size();
        int j=0;
        for(int i=0;i<n.size()-1;i++){
            if(n[i]!=n[i+1])n[j++]=n[i];
                
        }
        n[j++]=n[n.size()-1];
        return j;
    }
