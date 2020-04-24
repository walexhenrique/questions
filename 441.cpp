class Solution {
public:
    int arrangeCoins(int n) {
        long int quebra = 0;
                
        for(int i = 0; i < n; i++){
            if(n - quebra + 1 > 0){
                quebra++;
                n -= quebra;
            }
            
            
        }
        return quebra;
    }
};