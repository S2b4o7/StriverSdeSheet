#include <bits/stdc++.h> 
#include <vector>

bool binary_search(vector<int>arr,int si,int ei,int target)
{
    if(si>ei)
    {
        return false;
    }
    
    int mid=(si+ei)/2;
    
    if(arr[mid]==target)
    {
        return true;
    }
    
    else if(arr[mid]>target)
    {
        return binary_search(arr,si,mid-1,target);
    }
    else
    {
        return binary_search(arr,mid+1,ei,target);
    }


}





bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    
    for(int i=0;i<m;i++)
    {
        if(target>=mat[i][0] && target<=mat[i][n-1])
        {
            return binary_search(mat[i],0,n-1,target);
        }
    }
   
    return false;
     
}