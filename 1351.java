class Solution {
    public int countNegatives(int[][] grid) {
        int a[][] = new int[grid.length + 1][ grid[0].length + 1];
        for(int i = 1; i <= grid.length; i++){
            for(int x = 1; x <= grid[0].length; x++){
                a[i][x] = grid[i - 1][x - 1];
            }
        }
        int cont = 0;
        for(int i = 1; i <= grid.length; i++){
            int inicial = 1;
            int ate = grid[0].length;
            int meio = 0;
            
            while(inicial <= ate){
                meio = (inicial + ate) / 2;
                
                if(a[i][meio - 1] >= 0 && a[i][meio] < 0){
                    cont += (grid[0].length - meio) + 1;
                    break;
                }
                
                if(a[i][meio] >= 0){
                    inicial = meio + 1;
                }else if(a[i][meio - 1] < 0){
                    ate = meio - 1;
                }
            }
        }
        return cont;
    }
}