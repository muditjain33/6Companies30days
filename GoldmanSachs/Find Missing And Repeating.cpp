int *findTwoElement(int *arr, int n) {
        // code here
        // cout<<arr[1];
        int repeated=-1;
        int notappear=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==i+1){
                continue;
            }
            // cout<<arr[i]<<" ";
            while(arr[i]!=i+1){
                int num=arr[i];
                swap(arr[i],arr[num-1]);
                if(arr[i]==arr[num-1]){
                    repeated=arr[i];
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                notappear=i+1;
            }
        }
        
        // cout<<repeated;
        int * a=new int[2]{repeated,notappear};
        return a;
    }