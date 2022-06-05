#include <bits/stdc++.h> 

int findDuplicate(vector<int> &arr, int n){

    unordered_map<int,int>mp;
    int prod=arr[0];
    mp[arr[0]]=1;
    for(int i=1;i<n;i++)
    {    
        mp[arr[i]]++;
        if(mp[arr[i]]>1)
        {
            return arr[i];
        }
    }
}
