class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(const string& s : strs){
            encoded += to_string(s.length()) + '?' + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while (i < s.length()) {
            int slash = s.find('?', i);
            int len = stoi(s.substr(i, slash - i));
                decoded.push_back(s.substr(slash + 1, len));
                i = slash + 1 + len;
    }
    return decoded;
    }
};
