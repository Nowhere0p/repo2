#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define minLongLong -2e18
#define all(v) (v).begin(), (v).end()
#define gcd(a,b) __gcd(a,b)
#define skip continue
using namespace std;

// Template function to print a vector
template <typename T>
void vprint(const vector<T>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

//take input in vector size n
template <typename T>
void vTake(vector<T>& v) {
    for (int i=0;i<v.size();i++){
        cin>>v[i];
    }
}
template <typename T>
void aTake(T* arr,int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

//calc divisors of all indexes upto 1e6  //prime numbers will have val 1
//Sieve of eratosthenes
vector<ll> sieveOfEratosthenes(){
	vector<ll> v((1e6 +1),0);
	for(ll i=1;i<=1e6;i++){
		for(ll j=i;j<=1e6;j+=i){
			v[j]++;
		}
	}
	return v;
}

//prime factors of n
vector<ll> primeFactors(ll n){
	vector<ll> v;
	for(int i=2;i*i<=n;i++){
		while( n%i==0){
			v.push_back(i);
			n/=i;
		}
	}
	if(n!=1){
		v.push_back(n);
		
	}
return v;
}

//power function
ll power(ll a,ll b){
	if(b==0)
		return 1;
	ll half_power=power(a,b/2);
	if(b%2==0){
		return half_power * half_power ;
	}
	return half_power * half_power * a ;
}

//main solve
signed main() {
	int t;
	cin>>t;
	while(t-->0){

	
	}
}	
