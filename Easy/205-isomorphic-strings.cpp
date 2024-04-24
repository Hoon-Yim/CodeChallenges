#include <string>
#include <unordered_map>

class Solution 
{
public:
    bool isIsomorphic(std::string s, std::string t) 
    {
        std::unordered_map<char, char> sToT;
        std::unordered_map<char, char> tToS;
        
        for (int i = 0; i < s.size(); ++i)
        {
            if (!sToT.count(s[i]) && !tToS.count(t[i])) 
            {
                sToT[s[i]] = t[i];
                tToS[t[i]] = s[i];
            }
            else
            {
                if (sToT[s[i]] != t[i] || tToS[t[i]] != s[i]) return false;
            }
        }

        return true;
    }
};