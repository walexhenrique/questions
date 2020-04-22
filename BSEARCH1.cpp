#include <bits/stdc++.h>
 
using namespace std;
int a[1000000];
int main(){
  int n, q;
 
  scanf("%d", &n);
  scanf("%d", &q);
 
  for(int i = 1; i <= n; i++){
    scanf("%d", &a[i]);
  }
 
  for(int i = 0; i < q; i++){
    int v;
    scanf("%d", &v);
    int inicial = 1;
    int ate = n;
    int meio = 0;
    int indicePrimeiro = -1;
    while(inicial <= ate){
      meio = (inicial + ate) / 2;
 
      if(a[meio] == v){
        indicePrimeiro = meio - 1;
        ate = meio - 1;
      }else if(a[meio] > v){
        ate = meio - 1;
      }else{
        inicial = meio + 1;
      }
    }
 
    printf("%d\n", indicePrimeiro);
 
  }
} 