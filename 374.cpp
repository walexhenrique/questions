class Solution {
public:
    int guessNumber(int n) {
        long int left = 1;
        long int right = n;
        long int meio = 0;
        
        while(left <= right){
            meio = (left + right) / 2;
            
            
            if(guess(meio) == 0){
                return meio;
            }else if(guess(meio) < 0){
                right = meio - 1;
            }else{
                left = meio + 1;
            }
        }
        return -1;
    }
};