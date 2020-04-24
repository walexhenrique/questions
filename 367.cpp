class Solution {
public:
    bool isPerfectSquare(int num) {
        long int left = 1;
        long int right = num;
        long int meio = 0;
        
        while(left <= right){
            meio = (left + right) / 2;
            if(meio * meio == num){
                return true;
            }else if(meio * meio > num){
                right = meio - 1;
            }else{
                left = meio + 1;
            }
        }
        return false;
        
    }
};