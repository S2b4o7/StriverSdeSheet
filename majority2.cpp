#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	vector<int>ans;
    unordered_map<int, int> m;
    for(int i = 0; i <n; i++)
        m[arr[i]]++;
    int count = 0;
    for(auto i : m)
    {
        if(i.second > n/ 3)
        {
            
            ans.push_back(i.first);
        }
    }
    return ans;
}