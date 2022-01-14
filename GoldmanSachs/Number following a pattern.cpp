string printMinNumberForPattern(string S){
        // code here 
        int a[10]={0};
        int l=S.length();
        int b[l+1];
        int j=1;
        for(int i=0;i<=l;i++){
            if(i==0){
                b[i]=j;
                j++;
            }
            else if(S[i-1]=='I'){
                b[i]=j;
                j++;
            }
            else{
                int temp=i-1;
                int sav=b[temp];
                while(temp!=0 and S[temp-1]!='I'){
                    b[temp]=b[temp]+1;
                    temp--;
                }
                b[temp]=b[temp]+1;
                b[i]=sav;
                j++;
            }
        }
        string s="";
        for(int i=0;i<=l;i++){
            char e=b[i]+'0';
            s+=e;
        }
        return s;
    }