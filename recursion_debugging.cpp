#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define endl "\n"
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
//ceil==2.5==3,2.4=3
//flo0r=2.4==2
//int ans = max(ans, count); // maximum value find int two variable
///printing subset sum divisible by k
int k = 3;
int solve(int index, int arr[], int n, int sum)
{
    if (index == n)
    {
        if (sum % k == 0)
        {

            return 1;
        }
        else
            return 0;
    }

    //pick it
    sum = sum + arr[index];
    int l = solve(index + 1, arr, n, sum);

    sum = sum - arr[index];
    //not pick it
    int r = solve(index + 1, arr, n, sum);
    return l + r;
}
int cnt = 1;
void solveprint(int index, int arr[], int n, int sum, vector<int> &ds)
{
// debugging

    // cout << index << " " << sum << " ";
    // cout << endl;
    // if(cnt>=100)
    //     return;
    // cnt++;
    // debuging
    if (index == n)
    {
        if (sum % k == 0)
        {

            for (int i = 0; i < ds.size(); i++)
                cout << ds[i] << " ";
            cout << endl;
        }
        return;
    }

    //pick it
    ds.push_back(arr[index]);
    sum = sum + arr[index];
    solveprint(index+1 , arr, n, sum, ds);

    sum = sum - arr[index];
    ds.pop_back();
    //not pick it
    solveprint(index + 1, arr, n, sum, ds);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ds;
    int index = 0;
 solveprint(index, arr, n, 0, ds);
}
