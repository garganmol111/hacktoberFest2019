// https://www.codechef.com/problems/CNOTE

#include<bits/stdc++.h>
using namespace std;

struct notebook {
    int p;
    int c;
};

typedef struct notebook NoB;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x, y, k, n;

    cin>>t;
    while(t--) {
        cin>>x>>y>>k>>n;
        int pages = x-y;
        NoB book[n];
        for(int i=0; i<n; i++) 
            cin>>book[i].p>>book[i].c;
        int flag=0;
        for(int i=0; i<n; i++) 
            if(book[i].p >= pages && book[i].c <= k)
                flag = 1;
        if(flag==1) cout<<"LuckyChef\n";
        else        cout<<"UnluckyChef\n";
    }
    return 0;
}
