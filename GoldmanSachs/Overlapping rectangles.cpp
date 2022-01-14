int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        int x1=L1[0];
        int x2=R1[0];
        int x3=L2[0];
        int x4=R2[0];
        int a=0,b=0;
        if((x1>=x3 and x1<=x4) or (x2>=x3 and x2<=x4) or (x3>=x1 and x3<=x2) or (x2>=x3 and x2<=x4)){
            a=1;
        }
        // cout<<a<<endl;
        int y1=L1[1];
        int y2=R1[1];
        int y3=L2[1];
        int y4=R2[1];
        if((y1<=y3 and y1>=y4) or (y2<=y3 and y2>=y4) or (y3<=y1 and y3>=y2) or (y2<=y3 and y2>=y4)){
            b=1;
        }
        // cout<<b<<endl;
        return a*b;
    }