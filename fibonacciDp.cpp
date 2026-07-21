#include<iostream>
#include<vector>

using namespace std;


// this solution give O(n) result for both space and time complexity
class solution1{
public:
  int fibbonaci(int n){
    if (n <= 1) return n;

    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<= n; i++){
      dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
  }

};

// solution 2 will give O(n) time complexity and O(1) space complexity
class solution2{
public:

  int fibbonaci(int n){
    if(n <= 1) return n;

    int prev1 = 1, prev2 = 0;
    for(int i = 2; i<=n; i++){
      int curr = prev1 + prev2;
      prev2 = prev1;
      prev1 = curr;
    }
    return prev1;
  }
};




int main(){

  solution2 s;
  cout << s.fibbonaci(5) << endl;

  return 0;
}