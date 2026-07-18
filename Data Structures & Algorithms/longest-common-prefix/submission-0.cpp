class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        int a=first.size();
        string last=strs[strs.size()-1];
        int b=last.size();
        string ans="";
        int i=0;
        while(i<a && i<b)
        {
            if(first[i]==last[i])
            {
                ans=ans+first[i];
            }else
            {
             break;
            }
            i++;
        }
        return ans;

        
    }
};