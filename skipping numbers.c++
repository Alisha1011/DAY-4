#include <bits/stdc++.h>
using namespace std;
void print_result(int a[], int n, int k, int m)
{
    vector<int> v[m];
 
    for (int i = 0; i < n; i++) {
        int rem = a[i] % m;
 
        v[rem].push_back(a[i])
        if (v[rem].size() == k)
        {
            for (int j = 0; j < k; j++)
                cout << v[rem][j] << " ";
            return;            
        }
    }
   
    cout << "-1";
}
 
int main()
{
    int a[] = { 1, 8, 4 };
    int n = sizeof(a) / sizeof(a[0]);
    print_result(a, n, 2, 3);
    return 0;
}
