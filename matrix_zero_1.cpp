#include <bits/stdc++.h> 

void setZeros(vector<vector<int>> &matrix)
{
	queue<pair<int,int>>pv;
    int row=matrix.size();
    int col=matrix[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]==0)
            {
                pv.push(pair<int,int>(i,j));
            }
        }
        
        
    }
    
    while(!pv.empty())
        {
            int row_num=pv.front().first;
            int col_num=pv.front().second;
            
            pv.pop();
            
            for(int i=0;i<row;i++)
            {
                matrix[i][col_num]=0;   
            }
            for(int i=0;i<col;i++)
            {
                matrix[row_num][i]=0;   
            }
        }
          
    
    
    
    
}