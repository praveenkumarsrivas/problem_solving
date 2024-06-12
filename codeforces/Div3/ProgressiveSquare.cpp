#include<bits/stdc++.h>
#include<iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second
#define mee cout << "me" << "\n";
#define all(x) x.begin(), x.end()
#define Ceil(x,y) ((x+y-1)/y)
#define debug(x) cout << #x << " - " << x << "\n";
#define FL45H ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define TIME cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#define bufpb cin.ignore(numeric_limits<streamsize>::max(), '\n');

const int MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }

bool isPrime(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

ll super_power(ll base,ll power){
    ll res = 1;
    while(power > 0){
        if(power & 1) res = (res * base);
        power >>= 1;
        base = (base * base);
    }
    return res;
}

template <typename T>
void printVec(vector<T> v){
    for(auto val : v){
        cout << val << " ";
    }
    cout << endl;
}

void solve(){
    ll n,c,d;
    cin>>n>>c>>d;
    vector<int>vec(n*n);
    for(int i=0;i<n*n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int arr[n][n];
    arr[0][0]=vec[0];
    for(int i=1;i<n;i++){
        arr[i][0]=arr[i-1][0]+c;
    }

    for(int i=1;i<n;i++){
        for (int j=0;j<n;j++)
        {
            arr[j][i]=arr[j][i-1]+d;
        }
        
    }

    vector<int>ans;
    for (int i = 0; i < n; i++){
        for(int j=0;j<n;j++){
            ans.push_back(arr[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    if(ans==vec){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    


}

int main() {
    FL45H
    //TIME
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    //TIME
    return 0;
}

/* stuff you should look for
    * constraints
    * int overflow, array bounds
    * special cases, corner cases
    * dry run shIt
    * WRITE STUFF DOWN
    * DON'T GET STUCK ON ONE APPROACH
    * sort() - O(N*log(N)) - At 10^5 ~= 10^6 ;
*/

/*
*/