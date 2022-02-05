class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.empty())
                    return 0;
        int i=0;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
                nums[++i]=nums[j];
        }
        return i+1;
    }  
};
