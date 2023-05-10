    int totalCuts(int n,int k,vector<int> &arr){
        vector<int>left;
        vector<int>right(n);
        
        int l = INT_MIN;
        int r= INT_MAX;
        for (int i = 0; i<n; i++) {
            l = max(arr[i], l);
            left.push_back(l);
        }
        
        for (int i = n-1; i>=0; i--) {
            r = min(arr[i], r);
            right[i] = r;
        }
        int ct = 0;
        for (int i = 1; i<n; i++) {
            if (left[i-1]+right[i]>=k) {
                ct++; 
            }
        }
        return ct;
    }