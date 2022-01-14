bool canPair(vector<int> nums, int k) {
        // Code here.
        
        int len=nums.size();
        if(len%2!=0){
            return false;
        }
        if(k==1){
            return true;
        }
        map<int,int> m;
        for(int i=0;i<len;i++){
            nums[i]=nums[i]%k;
            if(m.count(nums[i])==0){
                m[nums[i]]=1;
            }
            else{
                m[nums[i]]++;
            }
        }
        for(auto i:m){
            if(i.first==0){
                continue;
            }
            int n1=i.first;
            int n2=k-i.first;
            if(n1==n2){
                if(m[n1]%2==0){
                    continue;
                }
                else{
                    return false;
                }
            }
            else if(m[n1]!=m[n2]){
                return false;
            }
        }
        return true;
    }