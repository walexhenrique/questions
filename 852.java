class Solution {
    public int peakIndexInMountainArray(int[] A) {
        
        int a[] = new int[A.length + 1];
        for(int i = 1; i <= A.length; i++){
            a[i] = A[i - 1];
        }
        
        int left = 1;
        int right = a.length;
        int meio = 0;
        while(left != right){
            meio = (left + right) / 2;
            
            if(a[meio] < a[meio + 1]){
                left = meio + 1;
            }else{
                right = meio;
            }
        }
        return left - 1;
        
    }
}