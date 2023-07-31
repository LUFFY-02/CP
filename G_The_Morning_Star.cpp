#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define eb emplace_back
#define m_p make_pair 
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define maxi(v) *max_element((v).begin(),(v).end())
#define mini(v) *min_element((v).begin(),(v).end())
#define sum(v) accumulate((v).begin(),(v).end(),0ll)
#define rev(v) reverse((v).begin(),(v).end())
#define all(v) (v).begin(),(v).end()
#define ed '\n'
#define Ed '\n'
#define no cout<<"NO"<<ed
#define yes cout<<"YES"<<ed
int max(int a,int b) {return (a>b ? a:b);}
int min(int a,int b) {return (a<b ? a:b);}
int gcd(int a,int b) {return (b == 0 ? a : gcd(b, a % b));}
int lcm(int a,int b) {return (a / gcd(a, b)) * b;}
typedef vector<int>     vi;   typedef vector<vector<int>> vvi;
void solve(){
	int n;cin>>n;
	map<int,int>mp[4];
	for(int i=0;i<n;i++){
		int x,y;cin>>x>>y;
		mp[0][x]++;
		mp[1][y]++;
		mp[2][x+y]++;
		mp[3][y-x]++;
	}
	int ans=0;
	for(int i=0;i<4;i++){
		for(auto &x:mp[i]){
			int z=x.second;
			ans+=(z*(z-1));
		}
	}
	cout<<ans<<ed;
}
signed  main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int _t=1;
    cin>>_t;
    while(_t--) solve();
}