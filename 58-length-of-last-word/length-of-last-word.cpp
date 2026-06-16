class Solution {
public:
    int lengthOfLastWord(string s) {
        const int n = s.size();
        int res = 0;

        //looping for the end
        for (int i = n - 1; i >= 0; i--){
            //case 1, space at the end
            if (s[n - 1] == ' '){
                if (i != n - 1 && s[i] == ' ' && s[i + 1] != ' ')break;
                if (s[i] == ' ') continue;
                res++;
            }/*case 2, no spaces at the end*/else{
                if (s[i] == ' ') break;
                res++;
            }
        }
        return res;
    }
};