 vector<int>ans;
    
    
    void subsets(vector<int> arr , int i,int sum){
        if(i==arr.size()){
            ans.push_back(sum);
            return;
        }
        
        //include//
        
        subsets(arr , i+1,sum+arr[i]);
        //exclude
        
        subsets(arr , i+1,sum);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        //brute generate all subsets in it//
        
        //Recurrsive approach//
        
        subsets(arr , 0,0);
        return ans;
        
    }
