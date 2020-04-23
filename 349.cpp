class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int a[nums1.size() + 1];
        int b[nums2.size() + 1];
        
        for(int i = 1; i <= nums1.size(); i++){
            a[i] = nums1[i - 1];
        }
        
        for(int i = 1; i <= nums2.size(); i++){
            b[i] = nums2[i - 1];
        }
        
        //Organizando o vetor para a busca
        sort(a + 1, a + nums1.size() + 1);
        sort(b + 1, b + nums2.size() + 1);
        
        vector<int> ans;
        
        
        for(int i = 1; i <= nums1.size(); i++){
            if(i != 1 && a[i] == a[i - 1]){
                continue;
            }
            int left = 1;
            int right = nums2.size();
            int center = 0;
            
            while(left <= right){
                center = (left + right) / 2;
                
                if(b[center] > a[i]){
                    right = center - 1;
                }else if(b[center] < a[i]){
                    left = center + 1;
                }else{
                    ans.push_back(a[i]);
                    break;
                }
            }
        }
        
        return ans;
    }
};