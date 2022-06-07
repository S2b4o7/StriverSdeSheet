#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	
    unordered_map<int, int> m;
    for(int i = 0; i <n; i++)
        m[arr[i]]++;
    int count = 0;
    for(auto i : m)
    {
        if(i.second > n/ 2)
        {
            count =1;
            return i.first;
        }
    }
    if(count == 0)
        return -1;
}