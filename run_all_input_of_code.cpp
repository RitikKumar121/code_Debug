#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define endl "\n"
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

//checking edge case where is failed

int second_largest(int arr[], int n)
{
    if (n <= 1)
        return -1;
    sort(arr, arr + n);
    return arr[n - 2];
}
int correct(int arr[], int n)
{
    if (n <= 1)
        return -1;
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
    }
    int ans2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ans)
        {
            ans2 = max(ans2, arr[i]);
        }
    }
    return ans2;
}

int main()
{
    srand(time(NULL));
    int cnt = 1;
    while (cnt <= 5)
    {

        int n = rand() % 5 + 1;

        cout << n << endl;
        int arr[n];
        for (int i = 0; i < n; i++)
            arr[i] = rand() % 7 + 1;

        for (int i = 0; i < n;i++)
            cout << arr[i] << " ";
        cout << endl;
        cout <<"output "<< correct(arr, n) << endl;

        cnt++;
    }
}
