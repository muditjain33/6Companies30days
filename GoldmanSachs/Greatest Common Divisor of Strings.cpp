int gcd(int num1,int num2){
        if(num1 < num2) swap(num1, num2);
        if(num2==0){
            return num1;
        }
        return gcd(num1%num2,num2);
    }
    string gcdOfStrings(string str1, string str2) {
        string ans;
        if(str1 + str2 != str2 + str1) return "";
        else{
            int len = gcd(str1.length(), str2.length());
            ans = str1.substr(0, len);
        }
        return ans;
    }