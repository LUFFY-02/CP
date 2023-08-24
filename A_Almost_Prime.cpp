#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define eb emplace_back
#define m_p make_pair 
#define umap unordered_map
#define uset unordered_set
#define imax INT_MAX
#define imin INT_MIN
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define maxi(v) *max_element((v).begin(),(v).end())
#define mini(v) *min_element((v).begin(),(v).end())
#define sum(v) accumulate((v).begin(),(v).end(),0ll)
#define rev(v) reverse((v).begin(),(v).end())
#define all(v) (v).begin(),(v).end()
#define PI 3.141592653589793238462
#define ed '\n'
#define Ed '\n'
#define no cout<<"NO"<<ed
#define yes cout<<"YES"<<ed
int max(int a,int b) {return (a>b ? a:b);}
int min(int a,int b) {return (a<b ? a:b);}
// int gcd(int a,int b) {return (b == 0 ? a : gcd(b, a % b));}
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(int a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
typedef vector<int>     vi;   typedef vector<vector<int>> vvi;
typedef pair<int,int> pii;
typedef priority_queue<int> maxheap;
typedef priority_queue<int,vector<int>,greater<int>> minheap;
void swap(int &x,int &y){
	int temp=y;
	y=x;
	x=temp;
}
// Power function with Modulo
int m_pow(int a,int b,int m){
    int res=1;
    while(b){
        if(b%2) res=res*a% m;
        a=a*a%m;
        b>>=1;
    }
    return res;
}
// Binary GCD
int gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}
int lcm(int a,int b) {return (a / gcd(a, b)) * b;}

int N;
vector<int>primes,ct;
void helper(){
    primes.resize(N+1,true);
    ct.resize(N+1);
    primes[0]=primes[1]=false;
    for(int i=2;i<=N;i++){
        if(primes[i]){
            for(int j=2*i;j<=N;j+=i){
                primes[j]=false;
                ct[j]++;
            }
        }
    }
}












// Code :)   ------------------------------------------------------------------------------------------------
void solve(){
    cin>>N;
    helper();
    int ans=count(ct.begin(),ct.begin()+N+1,2);
    cout<<ans<<ed;
}
signed  main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int _t=1;
    // cin>>_t;
    while(_t--) solve();
}