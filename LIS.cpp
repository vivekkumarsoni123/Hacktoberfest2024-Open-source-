#include<bits/stdc++.h>
using namespace std;
int main() {
  int arr[] = {10,20,30,40,50};
  vector<int> dp(5,1);
  int maxi = 1;

  for(int i = 0; i < 5; i++) {
    for(int prev = 0; prev < i; prev++) {
      if(arr[prev]<arr[i] && 1+dp[prev] > dp[i] ) {
        dp[i] = 1+dp[prev];
      }
    }
    if(dp[i] > maxi) {
      maxi = dp[i];
    }
  } 

  cout<<maxi<<endl;
}
