    bool wifiRange(int N, string S, int X){
       int zero=0,one=0;   
        for(int i=0;i<N;i++){
            if(S[i]=='1'){
                if(zero>0){
                    if(one==0 and zero>X)return false;
                    else if(zero>X*2)return false;
                }
                zero=0;
                one=1;
            }
            else zero++;
        }
        if(zero>0){
            if(one==0 or zero>X)return false;
        }
        return true;
    }