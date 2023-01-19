#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int Pairs(vector<int>& nums)
  {
    int count=0;
    for (i=0; i<nums.size(); i++)
    {
        for(j=i+1; j<nums.size(); j++)
         {
           if(i<j && nums[i]==nums[j])
             {
               count++; 
             }
         }
    }  
    return count;
  }
  
};  
    
