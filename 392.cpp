class Solution {
public:
    bool isSubsequence(string s, string t) {
        string sera = "";
        int cont = 0;
        for(int i = 0; i < t.size(); i++){
            if(s[cont] == t[i]){
                cont++;
                sera += t[i];
            }
        }
        
        return sera == s;
    }
};