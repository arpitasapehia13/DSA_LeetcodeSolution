//*******************************************************TABULATION************************************************************** */



#include <iostream>
using namespace std;

int fibbo( int n){
    int dp[n+1];
    dp[0] = 0;
    if(n>0){
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
  
    return dp[n];
    }

}
 
 int main(){
    int n;
    cin>> n;
   
   cout << "Fibbo series" << n << fibbo(n) << endl;

 }



 //*************************************************************MEMOIZATION*************************************************************** */

 #include <iostream>
using namespace std;

int fibbo(int n, int dp[]) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (dp[n] != -1) {
        return dp[n];
    }

    dp[n] = fibbo(n - 1, dp) + fibbo(n - 2, dp);
    return dp[n];
}

int main() {
    int n;
    cin >> n;

    int dp[n + 1];
    for (int i = 0; i <= n; i++) {
        dp[i] = -1;
    }

    cout << "Fibonacci number at position " << n << " is: " << fibbo(n, dp) << endl;

    return 0;
}
