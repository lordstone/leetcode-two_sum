#include <vector>
#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> myMap;
        map<int,int>::iterator ite;
        vector<int> ans;
        myMap.insert(pair<int,int>(target - nums[0],0));
        for (int i = 1;i<nums.size();i++){
            ite = myMap.find(nums[i]);
            if(ite!=myMap.end()){
                ans.push_back(ite->second+1);
                ans.push_back(i+1);
                return ans;
            }
            myMap.insert(pair<int,int>(target - nums[i],i));
        }
        return ans;
    }
};
