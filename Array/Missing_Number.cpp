/* simple sum ... actually there are two approaches 1.Xor and 2.sum and diff ... i choose second one ... but i know first one also*/

class Solution {
public:
int missingNumber(vector<int>& nums) {
int sum=0;
int sum2=0;
int n=nums.size();
for(int i=0;i<=n;i++)
{
sum+=i;
}
for(int i=0;i<n;i++)
{
sum2+=nums[i];
}
return sum-sum2;
}
};
