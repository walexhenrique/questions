class Solution {
    
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int a[nums1.size() + 1];
        int b[nums2.size() + 1];
        a[0] = 0;
        for(int i = 1; i <= nums1.size(); i++){
            a[i] = nums1[i - 1];
        }
        b[0] = 0;
        for(int i = 1; i <= nums2.size(); i++){
            b[i] = nums2[i - 1];
        }
        
        sort(a + 1, a + nums1.size() + 1);
        
        vector<int> ans;
        
        for(int i = 1; i <= nums1.size(); i++){
            sort(b + 1, b + nums2.size() + 1);
            
            if((sizeof(b)/sizeof(int)) == 1){
                if(b[0]== 9999){
                    break;    
                }
                
            }if((sizeof(b)/sizeof(int)) > 1){
                if(b[1] == 9999){
                    break;
                }
            }
            
            int left = 1;
            int right = nums2.size();
            int meio = 0;
            while(left <= right){
                meio = left + (right - left) / 2;
                
                if(a[i] == b[meio]){
                    b[meio] = 9999;
                    ans.push_back(a[i]);
                    break;
                }else if(a[i] > b[meio]){
                    left = meio + 1;
                }else{
                    right = meio - 1;
                }
            }
            
        }
        vector<int> aa;
        return ans;
    }
};