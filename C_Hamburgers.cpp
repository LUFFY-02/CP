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
int gcd(int a,int b) {return (b == 0 ? a : gcd(b, a % b));}
int lcm(int a,int b) {return (a / gcd(a, b)) * b;}
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(int a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
typedef vector<int>     vi;   typedef vector<vector<int>> vvi;
void swap(int &x,int &y){
	int temp=y;
	y=x;
	x=temp;
}
void solve(){
    string str;cin>>str;
    int b,s,c;
    b=s=c=0;
    for(auto &x:str){
        if(x=='B') b++;
        else if(x=='S') s++;
        else c++;
    }
    int ns,nb,nc;cin>>nb>>ns>>nc;
    int ans=min({ns/s,nb/b,nc/c});
    cout<<ans<< " ";
    int rs=ns-ans*s,rb=nb-ans*b,rc=nc-ans*c;
    cin>>nb>>ns>>nc;
    int money;cin>>money;
    int req=ns*rs + nb*rb + nc*rc;
    if(req <= money) ans++,money-=req;
    req=ns*s + nb*b + nc*c;
    ans+=money/req;
    cout<<ans<<ed;
}
signed  main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int _t=1;
    // cin>>_t;
    while(_t--) solve();
}