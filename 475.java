import java.util.*;
class Solution {
    public int findRadius(int[] houses, int[] heaters) {
        Arrays.sort(houses);
        Arrays.sort(heaters);
        int right = 0;
        if(houses[houses.length - 1] >= heaters[heaters.length - 1]){
            right = houses[houses.length - 1];
        }else{
            right = heaters[heaters.length - 1];
        }
        
        
        int left = 0;
        int fm = 0;
        
        while(left <= right){
            int meio = (left + right) / 2;
            int gasolina = meio;
            int cont = 0;
            
            boolean n = false;
            
            for(int i = 0; i < houses.length; i++){
                
                if(cont == heaters.length){
                  n = true;
                  break;
                }


                if(houses[i] > heaters[cont]){
                  if(houses[i] <= heaters[cont] + gasolina){
                    continue;
                  }else{
                    cont++;
                    i--;
                  }
                }else if(houses[i] == heaters[cont]){
                  continue;
                }else{
                  if(houses[i] + gasolina >= heaters[cont]){
                    continue;
                  }else{
                      cont++;
                      i--;
                  }
                }
                
            }
            
            if(n){
                left = meio + 1;
            }else{
                right = meio - 1;
                fm = meio;
            }
            
        }
        return fm;
    }
}