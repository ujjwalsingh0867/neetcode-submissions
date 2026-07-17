class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size() ) return false;
    unordered_map<char,int> ss;
    unordered_map<char,int> tt;


    for( char a : s)
    {
        ss[a]++;

    }
    for( char b : t)
    {
        tt[b]++;
        
    }
    return ss==tt;

  
    }
};
