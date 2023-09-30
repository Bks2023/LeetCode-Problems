class Solution {
public:
    
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> output;
        output.push_back("");
        for(auto key :digits){
            vector<string>temp;
            for(auto ch:pad[key-'0']){
                for(auto c: output){
                    temp.push_back(c+ch);
                }
            }
            
            output=temp;
        }
        return output;      
    }
};