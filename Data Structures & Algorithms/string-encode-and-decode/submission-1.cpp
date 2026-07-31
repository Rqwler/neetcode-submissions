class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs.size();i++){
            res=res+to_string(strs[i].size()) + "#" + strs[i];
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.size()){
            int slash = s.find('#', i);
            int len = stoi(s.substr(i, slash - i));
            res.push_back(s.substr(slash + 1, len));
            i = slash + 1 + len;
        }

        return res;

    }
};