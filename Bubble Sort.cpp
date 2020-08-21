#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        --a[i];
        result = max(result, i - a[i]);
    }
    ++result;
    cout << result << '\n';
    return 0;
}
