#include <bits/stdc++.h>
using namespace std;
struct numero{
    int valor;
    int index;
}parteum[100];

bool decrescente(numero g, numero h){
    if(g.valor == h.valor){
        return g.index < h.index; 
    }else
        return g.valor > h.valor;
}
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int a[mat.size() + 1][mat[0].size() + 1];
        
        for(int i = 1; i <= mat.size(); i++){
            for(int x = 1; x <= mat[0].size(); x++){
                a[i][x] = mat[i - 1][x - 1];
            }
        }
        
        
        
        for(int i = 1; i <= mat.size(); i++){
            int left = 1;
            int right = mat[0].size();
            int meio = 0;
            
            while(left <= right){
                meio = (left + right)/2;
                
                if(a[i][meio - 1] > 0 && a[i][meio] == 0){
                    left = meio;
                    break;
                }
               
                if(a[i][meio] > 0){
                    left = meio + 1;
                }else{
                    right = meio - 1;
                }
            }
            
            
            
            if(left > mat[0].size())
                parteum[i - 1].valor = 0;
            else
                parteum[i - 1].valor = mat[0].size() - left + 1;
            
            parteum[i - 1].index = i - 1;
        }
        
        sort(parteum, parteum + mat.size(), decrescente);
        
        vector<int> aaa;
        
        for(int i = 0; i < k; i++){
            aaa.push_back(parteum[i].index);
        }
        
        
        return aaa;
    }
};