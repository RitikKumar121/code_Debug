#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define endl "\n"
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);



int main()
{
//     constraint

//         1 <= T <= 10;
//     1 <= N <= 20;
//     1 <= arr[i] <= 1e8;
//
srand(time(NULL));
int t = rand() % 10 + 1;
cout << t << endl;
while(t--)
{
    int n = rand() % 5 + 1;
    cout<<n<< endl;

    for (int i = 0; i < n;i++)
        cout << rand() % 10 + 1 << " ";
    cout << endl;
}


}
