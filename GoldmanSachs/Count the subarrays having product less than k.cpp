int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int num=0;
        int s=0,e=0;
        long long mul=1;
        for(int i=0;i<n;i++){
            mul=mul*a[i];
            if(mul<k){
                num+=(e-s+1);
            }
            else{
                while(e>=s){
                    mul=mul/a[s];
                    s++;
                    if(mul<k){
                        num+=(e-s+1);
                        break;
                    }
                }
            }
            e++;
        }
        return num;
    }