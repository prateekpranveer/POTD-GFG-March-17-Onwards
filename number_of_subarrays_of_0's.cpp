long long int no_of_subarrays(int n, vector<int> &arr) {
    arr.push_back(1);
    long long int ct = 0;
    vector<long long>v;
    for (int i = 0; i<arr.size(); i++) {
        if (arr[i]!=0) {
            v.push_back(ct);
            ct=0;
        }
        else ct++;
    }
    long long ans = 0;
    for (auto x:v) {
        long long d = (x*(x+1))/2;
        ans+=d;
    }
    return ans;
}