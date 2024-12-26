// PRRINTIN THE MAXIMUM SUBARRAY SUM

#include <bits/stdc++.h>
using namespace std;
int maxSubarraysum(vector<int> &a, int n, int &ansStart, int &ansEnd)
{
    int sum = 0;
    int startt = 0;
    int maxi = INT_MIN;
    ansStart = -1;
    ansEnd = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            startt = i;
        }
        sum += a[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = startt;
            ansEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    if (maxi < 0)
    {
        return {};
    }

    return maxi;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ansStart, ansEnd;
    int result = maxSubarraysum(a, n, ansStart, ansEnd);
    cout << result;
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}