class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int a[numbers.size() + 1];
        
        for(int i = 1; i <= numbers.size(); i++){
            a[i] = numbers[i - 1];
        }
        
        vector<int> ans;
        
        for(int i = 1; i <= numbers.size(); i++){
            int left = i + 1;
            int right = numbers.size();
            int meio = 0;
            
            int procura = target - a[i];
            bool encontrado = false;
            while(left <= right){
                meio = left + (right - left) / 2;
                
                if(a[meio] == procura){
                    encontrado = true;   
                    break;
                }else if(a[meio] > procura){
                    right = meio - 1;
                }else{
                    left = meio + 1;
                }
            }
            
            if(encontrado){
                ans.push_back(i);
                ans.push_back(meio);
                break;
            }
            
        }
        

        return ans;
    }
};