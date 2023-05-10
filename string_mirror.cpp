    string stringMirror(string str){
        int n = str.size();
        string nstr = "";
        nstr+=str[0];
        if (str[0]==str[1]) return nstr+nstr;
        for (int i = 1; i<n; i++) {
            if (str[i-1]>=str[i]) {
                nstr = str.substr(0,i+1);
            }
            else break;
        }
        
        string n2 = nstr;
        reverse(nstr.begin(), nstr.end());
        return n2+nstr;
    }