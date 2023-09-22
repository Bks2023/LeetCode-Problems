class Solution {
public:
    int compress(vector<char>& chars) {
        
        int index=0;

       int i=0;
       while(i<chars.size()){

            char  letter = chars[i];
            int cnt=0;

            while(i<chars.size() && chars[i]==letter){
                cnt++;
                i++;
            }

            chars[index++] = letter;
            if(cnt > 1){
                for(char c: to_string(cnt)){
                    chars[index++]=c;
                }
            }
            
        }

        return index;
    }
};