#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;
int i,j,k,arr[MAX];

void solve()
{
    string str,str2,str3;
    int x,y,z,n,a,b,c;
    bool stop,yes,on;
    int temp=-1,total=0,sum=0;
    map<char,int>mp;
    cin >> str;

    for(int i=0; str[i]; i++)
    {
        mp[str[i]]=i+1;
    }

    cin >> str2;
    for(int i=1; str2[i]; i++)
    {
        sum+=(abs(mp[str2[i]]-mp[str2[i-1]]));
    }

    cout << sum << endl;
}

int main()
{
    FastRead
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
