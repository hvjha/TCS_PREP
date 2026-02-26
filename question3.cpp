#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerToLeft(vector<int> arr)
{
    vector<int> ans;
    stack<int> s;

    for (int i = 0; i < arr.size(); i++)
    // {
    //     if (s.empty())
    //     {
    //         ans.push_back(-1);
    //     }
    //     else if (s.top() < arr[i])
    //     {
    //         ans.push_back(s.top());
    //     }
    //     else
    //     {
    //         while (!s.empty() && s.top() >= arr[i])
    //         {
    //             s.pop();
    //         }
    //         if (s.empty())
    //             ans.push_back(-1);
    //         else
    //             ans.push_back(s.top());
    //     }
    //     s.push(arr[i]);
        {
            while (!s.empty() && s.top() >= arr[i])
            {
                s.pop();
            }
            if (s.empty())
                ans.push_back(-1);
            else
                ans.push_back(s.top());
            
            s.push(arr[i]);
    }

    return ans; 
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = nearestSmallerToLeft(arr);

    for (int x : ans)
        cout << x << " ";

    cout << endl;
}