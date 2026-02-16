/* slinding window with hashset */


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int>a;
        int left=0;
        for(int i=0;i<=k && i<n;i++)
        {
            if(a.find(nums[i])==a.end())
            {
                a.insert(nums[i]);
            }
            else
            {
                return true;
            }
        }
        for(int i=k+1;i<n;i++)
            {
                a.erase(nums[left]);
                left++;
                if(a.find(nums[i])==a.end())
                {
                    a.insert(nums[i]);
                }
                else
                {
                    return true;
                }
            }
        return false;
        
    }
};
