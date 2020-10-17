//copyright sumitraj387
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back//__standard_template_
#define come_on ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); //____program booster____

#define m_p make_pair
#define mod 1000000007

#define pop pop_back
#define str string
#define endl "\n"
#define vec vector
main()
{
    ll n,i,j,k;
    cin>>n>>k;
    ll        arr[n];
    vector<int>v(k);
    list<int>q;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        int c=0;
        for(auto it=q.begin();it!=q.end();it++)
        {
            if(*it==arr[i])
            {
                c=1;
                break;
                //fgh
            }
        }
      if(c==0)
        {
            if(q.size()<k)
                q.push_front(arr[i]);
         
           
        }
 
    }
    cout<<q.size()<<endl;
    for(auto it=q.begin();it!=q.end();it++)
    {
        cout<<*it<<" ";
    }
}
