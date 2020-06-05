class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.size() == 0)
            return "";
        if(strs.size() == 1)
            return strs[0];
        sort(strs.begin(),strs.end());
        for(int i = 0; i < min(strs[0].size(),strs[strs.size()-1].size()); ++i)
        {
            if(strs[0][i] != strs[strs.size()-1][i])
                return strs[0].substr(0,i);
        }
        return strs[0].size() > strs[strs.size()-1].size() ? strs[strs.size()-1]:strs[0];
    }
};
