    static bool compar(Job a, Job b)
{
    return (a.profit > b.profit);
}
// Function to find the maximum profit and the number of jobs done.
vector<int> JobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, compar);
    int max = arr[0].dead;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].dead > max)
            max = arr[i].dead;
    }
    vector<int> js(max + 1, -1);
    vector<int> ans;
    int jobmade = 0;
    int profitmade = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].dead; j > 0; j--)
        {
            if (js[j] == -1)
            {
                js[j] = i;
                jobmade++;
                profitmade = profitmade + arr[i].profit;
                break;
            }
        }
    }

    ans.push_back(jobmade);
    ans.push_back(profitmade);
    return ans;
    // your code here
} 