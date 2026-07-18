class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1) return nums[0];
        int count=1; int ans=0;
        for(int i=0;i<(nums.size()-1);i++)
        {
            if(nums[i]==nums[i+1] )
            {
               count++;
               ans=nums[i];
            }else
            {
                count=1;
                ans=nums[i];
               
            }
          if (count > nums.size() / 2) {
          ans = nums[i];
         break;
}
        } 
       return ans;



    }
};