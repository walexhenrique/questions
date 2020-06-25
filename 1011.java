class Solution {
    public int shipWithinDays(int[] weights, int D) {
        
        int right = 0;
        
        int menor = -1000000000;
        for(int i = 0; i < weights.length; i++){
            right += weights[i];
            if(menor < weights[i]){
                menor = weights[i];
            }
        }
        
        int left = menor;
        int fm = left;
        while(left <= right){
            int meio = (left + right) / 2;
            int dias = 0;
            int aux = 0;
            int ultim = -1;
            
            for(int i = 0; i < weights.length; i++){
                
                if(weights[i] + aux >= meio){
                    aux = 0;
                    
                    dias++;
                }
                aux += weights[i];
                
            }
            
            if(dias >= D){
                left = meio+1;
                fm = meio;
            }else{
                right = meio - 1;
            }
        }
        return fm;
        
        
    }
}