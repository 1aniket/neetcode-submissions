class Solution {
private:

    bool checkPal(string &s)
    {
        for(int i = 0; i < s.length()/2; i++)
        {
            if(s[i] != s[s.length()-1-i])
            {
                return false;
            }
        }

        return true;
    }

    void findMaxPal(string &s, string &max_str, int index)
    {
        if(index >= s.length())
        {
            return;
        }

        for(int i = 0; index + i < s.length(); i++)
        {
            string current = s.substr(index, i + 1);

            if(current.length() > max_str.length() &&
               checkPal(current))
            {
                max_str = current;
            }
        }

        findMaxPal(s, max_str, index + 1);
    }

public:
    string longestPalindrome(string s) {

        string ans = "";

        findMaxPal(s, ans, 0);

        return ans;
    }
};