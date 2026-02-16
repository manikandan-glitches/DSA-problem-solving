/* simple sum not any fancy algo very simple traversal approach*/
class Solution {
public:
vector<string> summaryRanges(vector<int>& nums) {
vector<string>str;
int start=0;
if(nums.size()==0)
{
return {};
}
for(int i=1;i<nums.size();i++)
{
if((long long)nums[i]-nums[i-1]!=1)
{
if(start==i-1)
{
str.push_back(to_string(nums[i-1]));
}
else
{
str.push_back(to_string(nums[start])+"->"+to_string(nums[i-1]));
}
start=i;
}
}
if(start==nums.size()-1)
{
str.push_back(to_string(nums[nums.size()-1]));
}
else
{
str.push_back(to_string(nums[start])+"->"+to_string(nums[nums.size()-1]));
}
return str;
}
};
