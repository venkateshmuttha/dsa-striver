#include <bits/stdc++.h>
using namespace std;
void summ(int a[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << "Yes";
                cout << "[" << i << "," << j << "]";
                return;
            }
                }
    }
    cout << "NO";
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    summ(a, n, target);
}