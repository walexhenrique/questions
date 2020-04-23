#include <bits/stdc++.h>

using namespace std;


int main(){
  int n, k;
  cin >> n;
  
  int a[n + 1];  

  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }

  cin >> k;

  for(int i = 1; i <= n; i++){
    int left = i + 1;
    int right = n;
    int meio = 0;

    int achar = k - a[i];
    bool encontrado = false;
    while(left <= right){
      meio = left + (right - left) / 2;

      if(a[meio] == achar){
        encontrado = true;
        break;
      }else if(a[meio] > achar){
        right = meio - 1;
      }else{
        left = meio + 1;
      }
    }
    if(encontrado){
      cout << a[i] << " " << a[meio] << endl;
      break;
    }
  }

}