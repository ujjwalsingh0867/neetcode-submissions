class Solution {
public:
    bool isAnagram(string s, string t) {
     sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int a=s.size(); int b=t.size();
    if(a!=b) return false;
    int i=0;
    while(a>0)
    {
        if(s[i]!=t[i])
        {
            return false;
        }
        i++; 
        a--;
    }
    return true;


        
    }
};
