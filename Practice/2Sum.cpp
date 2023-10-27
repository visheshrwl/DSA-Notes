/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order.

Example:
   Nums =[1,2,6,5,3];
   target = 8
   output : [2,3]

*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
      vector<int> twoSum(vector<int>& nums, int target) {
                map<int,int> m;
                vector<int> v;
                int n= nums.size();
                for(int i=0;i<n;i++)
                {
                    
                        int diff = target - nums[i];
                        if(m.find(diff) != m.end())
                        {
                        auto p = m.find(diff);        
                        v.push_back(p->second);
                        v.push_back(i);
                        }
                        m.insert(make_pair(nums[i],i));
                }
          
                return v;
}
};


int main(){
    Solution s ;
    vector<int> v;
     v={1,6,3,2,5};
     vector<int> result= s.twoSum (v, 11);
     for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;

}
