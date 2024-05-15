//Hafang2115
#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define Random(lf, rt) (lf + rand() % (rt - lf + 1))
#define reset(x) memset(x, (int)0, sizeof x)
#define pii pair<int, int>
#define FOR(i, a, b) for(int i = (a); i <= (b); i++)
#define FORD(i, a, b) for(int i = (a); i >= b; i--)
#define bit(x, i) ((x >> i) & 1)
#define all(x) x.begin(), x.end()
#define maxn (int)100005
#define mod (int)1000000007
#define eps 1e-10
#define Task ""

using namespace std;
typedef long long ll;
typedef long double ld;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rd(l, r) (l + rng() % (r - l + 1))

void add(int &x, int y){
    x += y;
    if(x >= mod) x -= mod;
}

void sub(int &x, int y){
    x -= y;
    if(x < 0) x += mod;
}

void maximize(ll &x, ll y){
    x = max(x, y);
}

void minimize(int &x, int y){
    x = min(x, y);
}
//this is my first demo
signed main()
{
    if(fopen(Task".inp", "r")){
        freopen(Task".inp","r",stdin);
        freopen(Task".out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
<<<<<<< HEAD
    cout << "nothing here";
=======
    cout << "test conflict time baby";
>>>>>>> 9ce9d203ccb80d5ce28a323ab525e9f12174e5d4
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

