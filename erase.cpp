// NGUYEN QUOC ANH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ff first
#define ss second
#define enld endl
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)

const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=200005;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    bool check = true;
    if (n%2==1){ 
        fort(i,0,s1.size()-1){
            if (s1[i]==s2[i]) { check = false; break; }
        }
         
    }else{
        fort(i,0,s1.size()-1){
            if (s1[i]!=s2[i]) {check = false; break;}
        }
        
    }
    if (check) cout << "Deletion succeeded" << endl; else cout << "Deletion failed" << endl;
    return 0;
}