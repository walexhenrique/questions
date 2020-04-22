#include <bits/stdc++.h>

using namespace std;
int a[100003];
int b[10002];
int main(){

  int n, m;

  cin >> n >> m;


  for(int i = 0; i < n - 1; i++){
    cin >> a[i];
  }
  
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }

  bool primeira = true;
  for(int i = 0; i < m; i++){
    int v;
    cin >> v;
    int inicial = 0;
    int ate = n - 1;
    int meio = 0;
    while(inicial != ate){
      meio = (inicial + ate) / 2;

      if(a[meio] < v){
        inicial = meio + 1;
      }else if(a[meio] > v){
        ate = meio;
      }else{
        break;
      }
    }
    if(primeira){
      primeira = false;
      if(a[meio] > v){
        cout << b[meio];
      }else if(a[meio] <= v){
        cout << b[meio + 1];
      }
    }else{
      if(a[meio] > v){
        cout << " " << b[meio];
      }else if(a[meio] < v){
        cout << " " << b[meio + 1];
      }else{
        cout << " " << b[meio + 1];
      }
    }
  }


  return 0;
}