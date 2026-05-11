class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded = "";

        for(auto &i : strs)
        {
            encoded+="[";
            encoded+=i;
            encoded+="]";
        }

        return encoded ;
    }

    vector<string> decode(string s) {

        vector<string>decoded;

        string current ="";

        int i = 0;
        int n = s.length();

        bool start = false;
       

        while(i< n)
        {
            if(!start && s[i]=='[')
            {
                start = true;
               
            }else if(start && s[i]==']')
            {
                decoded.push_back(current);
                current = "";
                start = false;
               
            }else current.push_back(s[i]);
            i++;
        }


        return decoded;
    }
};
