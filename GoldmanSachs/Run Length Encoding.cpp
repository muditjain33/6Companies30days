string encode(string src)
{
    string s;
    char prev='9';int num=0;
  for(auto i:src){
      if(i!=prev){
          if(prev!='9'){
             s+=prev;
             s+=to_string(num);
          }
          num=1;
          prev=i;
      }
      else{
          num++;
      }
  }
  if(prev!='9'){
             s+=prev;
             s+=to_string(num);
          }
  
  return s;
}     