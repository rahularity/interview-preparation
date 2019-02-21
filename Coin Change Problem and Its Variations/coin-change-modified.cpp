/*
	You have unlimited number of coins with values 1,2,…,n. You want to select some set of coins having the total value of S.
	It is allowed to have multiple coins with the same value in the set. What is the minimum number of coins required to get sum S?
*/ 	

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll minCoins(ll n, ll k){
	ll ans=0;
	ans += k/n;
	
	if(k%n == 0) return ans;
	else return ans+1;
}

int main() {

	ll n,k;
	cin>>n>>k;
	
	cout<<minCoins(n, k)<<endl;

	return 0;
}
