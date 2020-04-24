class Solution {
public:
    int firstBadVersion(int n) {
        
        long int left = 1;
        long int right = n;
        long int meio = 0;
        
        while(left <= right){
            meio = (left + right) / 2;
            if(isBadVersion(meio) && !isBadVersion(meio - 1)){
                return meio;
            }else if(isBadVersion(meio) == false){
                left = meio + 1;
            }else{
                right = meio - 1;
            }
        }
        return -1;
    }
    
};