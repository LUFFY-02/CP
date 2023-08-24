/* Problem Link :: https://www.geeksforgeeks.org/find-the-k-th-permutation-sequence-of-first-n-natural-numbers/

Statement :: Given two integers N and K, find the Kth permutation sequence of numbers from 1 to N without using STL function.
*/

// Method 1 : Brute forcing on all permutations and printing them accordingly.

string ans="";
bool done=false;
void helper(vi &v){
    for(auto &x:v) ans+=to_string(x);
}
void permutate(vector<int> &s,int in,int k,int &curr){
    if(done) return;
    if(in==s.size()){
        curr++;
        if(curr==k){
            done=true;
            helper(s);
        }
    }
    for(int i=in;i<s.size();i++){
        swap(s[i],s[in]);
        permutate(s,in+1,k,curr);
        swap(s[i],s[in]);
    }
}
void solve(){
    int n,k;cin>>n>>k;
    vector<int>v;
    for(int i=1;i<=n;i++) v.eb(i);
    int curr=0;
    permutate(v,0,k,curr);
    cout<<ans<<ed;
}

// Method 2 

int fact[10] = {1,1,2,6,24,120,720,5040,40320,362880};
void permutation(int n, int k, set<int>&nums, string &str){
    if(n==0) return;
    int val;
    if(k<=1 || k<=fact[n-1])
        val = k==0 ? *nums.rbegin() : *nums.begin(); 
    else{
        int index = k/fact[n-1];               
        k = k %fact[n-1];   // remaining permutations
        if(k==0)index--;
        val = *next(nums.begin(),index);
    }
    str+= to_string(val); 
    nums.erase(val);
    return permutation(n-1,k,nums,str);
}
string getPermutation(int n, int k) {
    set<int>nums;
    for(int i=1;i<=n;i++)nums.insert(i);
    string str = "";
    permutation(n,k,nums,str);
    return str;
}