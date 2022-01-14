vector<vector<string> > Anagrams(vector<string>& string_list) {
        map<string,vector<string>> m;
        for(auto i:string_list){
            string temp=i;
            sort(i.begin() , i.end());
            if(m.count(i)==0){
                vector<string> v{temp};
                m[i]=v;
            }
            else{
                m[i].push_back(temp);
            }
        }
        vector<vector<string> > v;
        for(auto i:m){
            v.push_back(i.second);
        }
        return v;
    }