#include <bits/stdc++.h>
using namespace std;
int main() {
  
  int n;

  cin >> n;

  for(int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    int arr[a + 1];
    for(int j = 1; j <= a; j++){
      cin >> arr[j];
    }

    sort(arr + 1, arr + a);

    int left = 1;
    int right = arr[a];
    int fm = -1;

    while(left <= right){
      int meio = (left + right) / 2;
      int dis = 0;
      int longe = 0;


      for(int j = 1; j <= a; j++){
        if(j == 1){
          longe++;
          continue;
        }

        if(dis >= meio){
          dis = 0;
          longe++;
        }
        dis += arr[j] - arr[j - 1];
      }

      if(dis >= meio){
          dis = 0;
          longe++;
      }
      
      if(longe >= b){
        left = meio + 1;
        fm = meio;
      }else{
        right = meio - 1;
      }
    }
    cout << fm << endl;
  }
}