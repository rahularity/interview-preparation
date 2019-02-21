/*
	PROBLEM:
	Given a list of 'N' coins, their values being in an array A[], 
	return the minimum number of coins required to sum to 'S' (you can use as many coins you want). 
	If it's not possible to sum to 'S', return -1.
	
	Example:
		Input : 
		Number of coins (n): 5
		Required sum (S): 29 
		Coin denominations: { 1,2,3,4,5 } 
	
		Output : 
		6
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define MAX 100005

ll getMinCoins(ll coins[], ll n , ll S, ll dp[]){
	
	if (S == 0){
		return 0;
	}
	
	if(dp[S] != 0){
		return dp[S];
	}
	
	ll curr = 0 , min = INT_MAX;
	
	for(ll i = 0 ; i < n ; i++){
		if(coins[i] <= S){
			curr = 1 + getMinCoins(coins, n, S-coins[i], dp);
			if (curr < min){
				min = curr;
			}
		}
	}
	
	dp[S] = min;
	
	return min;
}

// void print(long long dp[] , long long n){
// 	for(int i = 1 ; i <= n ; i++){
// 		cout<<dp[i]<<" ";
// 	}
// 	cout<<"\n";
// }

int main(){
	
	ll n,S;
	cin>>n>>S;

	ll coins[n];
	for(ll i=0 ; i<n ; i++){
		cin>>coins[i];
	}
	
	ll dp[S+1];
	memset(dp,0, sizeof(dp));
	
	//print(qb,S);
	ll ans = getMinCoins(coins,n,S,dp);
	//print(qb,S);
	
	if(ans==INT_MAX) cout<<"-1"<<endl;
	else cout<<ans<<endl;
	
	return 0;
	
}

	

