int minSubArrayLen(int target, vector<int>& nums) {
        int cs=0,cn=0;
        int maa=INT_MAX;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]>=target){
                return 1;
            }
            cs=cs+nums[i];
            nums[i]=cs;
            if(nums[i]>=target){
                maa=min(maa,i+1);
            }
        }
        
        for(int i=0;i<l;i++){
            int cha=nums[i]+target;
            int j=lower_bound(nums.begin(), nums.end(), cha)-nums.begin();
            if(j==l){
                continue;
            }
            maa=min(maa,j-i);
        }
        if(maa==INT_MAX){
            maa=0;
        }
        return maa;
    }