DSU :
------------------------------------------------------------------------------
int par[M];
int ran[M];
int parent(int i){
    if (par[i] == i)
        return i;
    return par[i] = parent(par[i]);
}
void unite(int i, int j){
    i = parent(i);
    j = parent(j);
    if (i == j)
        return;
    if (ran[i]<ran[j])
        swap(i,j);
    else if (ran[i] == ran[j])
        ran[i]++;
    par[j] = i;
}
void pre(int n){
    for (int i = 1; i<=n; i++)
        par[i] = i, ran[i] = 1;
}
------------------------------------------------------------------------------

KMP Prefix Function
------------------------------------------------------------------------------
vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
------------------------------------------------------------------------------

LCA Binary Lifting :
------------------------------------------------------------------------------
int n, l;
vector<vector<int>> adj(N);

int timer;
vector<int> tin, tout, depth;
vector<vector<int>> up;

void dfs(int v, int p, int h)
{
	depth[v] = h;
    tin[v] = ++timer;
    up[v][0] = p;
    for (int i = 1; i <= l; ++i)
        up[v][i] = up[up[v][i-1]][i-1];

    for (int u : adj[v]) {
        if (u != p)
            dfs(u, v, h+1);
    }

    tout[v] = ++timer;
}

bool is_ancestor(int u, int v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v)
{
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (int i = l; i >= 0; --i) {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    return up[u][0];
}

void preprocess(int root) {
    tin.resize(n+1);
    tout.resize(n+1);
    depth.resize(n+1);
    timer = 0;
    l = ceil(log2(n));
    up.assign(n+1, vector<int>(l + 1));
    dfs(root, root, 0);
}
------------------------------------------------------------------------------

Manacher (palindrome in O(N) ) :
------------------------------------------------------------------------------
void Manacher(string &s){
	int n;
	vector<int> d1(n);

	for (int i = 0, l = 0, r = -1; i < n; i++) {
	    int k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);
	    while (0 <= i - k && i + k < n && s[i - k] == s[i + k]) {
	        k++;
	    }
	    d1[i] = k--;
	    if (i + k > r) {
	        l = i - k;
	        r = i + k;
	    }
	}

	vector<int> d2(n);
	for (int i = 0, l = 0, r = -1; i < n; i++) {
	    int k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);
	    while (0 <= i - k - 1 && i + k < n && s[i - k - 1] == s[i + k]) {
	        k++;
	    }
	    d2[i] = k--;
	    if (i + k > r) {
	        l = i - k - 1;
	        r = i + k ;
	    }
	}
}
------------------------------------------------------------------------------

Modular Arithmetic:
------------------------------------------------------------------------------
int madd (int a, int b){
	return (0ll + a + b)%mod;
}
int msub (int a, int b){
	return (0ll + a - b + mod)%mod;
}
int mmul (int a, int b){
	return (1ll * a * b)%mod;
}
int minv (int a){
	return powe(a, mod-2);
}
int mdiv (int a, int b){
	return mmul(a, minv(b));
}
------------------------------------------------------------------------------

Seive (Prime Numbers)
------------------------------------------------------------------------------
bool sei[M];
vector<int> primes;

void seive(){
	for (int i = 2; i<=M; i++){
		if (sei[i])
			continue;
		primes.PB(i);
		for (int j = 2*i; j<=M; j+=i){
			sei[j] = true;
		}
	}
}
------------------------------------------------------------------------------

Segment Tree with Lazy Propagation (max value) :
------------------------------------------------------------------------------
int t[4*M], lazy[4*M];
void push(int v) {
    t[v*2] += lazy[v];
    lazy[v*2] += lazy[v];
    t[v*2+1] += lazy[v];
    lazy[v*2+1] += lazy[v];
    lazy[v] = 0;
}

void update(int v, int tl, int tr, int l, int r, int addend) {
    if (l > r) 
        return;
    if (l <= tl && tr <= r) {
        t[v] += addend;
        lazy[v] += addend;
    } else {
        push(v);
        int tm = (tl + tr) / 2;
        update(v*2,	tl, tm, l, r, addend);
        update(v*2+1, tm+1, tr, l, r, addend);
        t[v] = max(t[v*2], t[v*2+1]);
    }
}

int query(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return -INF;
    if (l <= tl && tr <= r)
        return t[v];
    push(v);
    int tm = (tl + tr) / 2;
    return max(query(v*2, tl, tm, l, r), 
               query(v*2+1, tm+1, tr, l, r));
}
------------------------------------------------------------------------------

Template :
------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}
int main(){
    fast;
    
    return 0;
}
------------------------------------------------------------------------------

Unordered_Map Hash :
------------------------------------------------------------------------------
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

unordered_map<int,int,custom_hash> hash;
------------------------------------------------------------------------------



Z-Function :
------------------------------------------------------------------------------
vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}
------------------------------------------------------------------------------