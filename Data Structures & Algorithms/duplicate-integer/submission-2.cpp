class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        if(nums.empty()) return false;
        unordered_map<int,int> data;
        for(int a:nums)
        {
            if(data.find(a)!= data.end())
            {
            return true;
            }
           data[a]++;
        }
        
        return false;
        
    }
};