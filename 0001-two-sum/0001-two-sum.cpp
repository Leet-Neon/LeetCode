class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        for (int i=0;i<nums.size()-1;i++){
            for (int j=i+1;j<nums.size();j++)
            if(nums[j]+nums[i]==target){
                ans[1]=j;
                ans[0]=i;
                break;

            }

        }
        return ans;
    }
};