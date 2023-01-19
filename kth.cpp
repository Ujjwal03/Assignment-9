#include <bits/stdc++.h>
using namespace std;
class Solution {
public: 
  string kTH(vector<string>& arr, int k)
  {
    underorded_map<string, int>hash_map;
    for (int = 0; i < arr.size(); i++);
    {
      hash_map[arr[i]];
    }
    for (auto &&a : arr){
        if(hash_map[a] == 1 && k == 0)
          return a;
    }
  return 0;

};    
