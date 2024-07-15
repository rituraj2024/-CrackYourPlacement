long long findMinDiff(vector<long long> a, long long n, long long m)
{
    // code

    sort(a.begin(), a.end());
    int low = 0;
    int high = m - 1;
    long long min = INT_MAX;
    while (high < n)
    {
        if (a[high] - a[low] < min)
        {
            min = a[high] - a[low];
        }
        low++, high++;
    }
    return min;
}