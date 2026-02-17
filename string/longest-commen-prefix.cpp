/*simple sorting concept... another algo also that was binery search*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref="";
        int a=0;
        int n=strs[0].length();
        int m=strs.size();
        sort(strs.begin(),strs.end());
        for(int i=0;i<n;i++)
            {
               if(strs[0][i]!=strs[m-1][i])
               {
                   return pref;
               }
                pref+=strs[0][i];
            }
        return pref;
    }
};
