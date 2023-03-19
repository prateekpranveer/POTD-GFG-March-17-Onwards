long long sub (int n, vector<int>&A, int m) {
        vector<int> mp(2*n+1, 0);
        long long cur = n, total = 0, ans = 0;
        mp[cur]++;
        for (int i = 0; i<n; i++) {
            if (A[i]>=m) {
                total+=mp[cur];
                cur +=1;
            }
            else {
                total-=mp[cur-1];
                cur-=1;
            }
            ans += total;
            mp[cur]++;
        }
        return ans;
    }
    long long countSubarray(int N,vector<int> A,int M) {
        return sub(N,A,M)-sub(N,A,M+1);
    }