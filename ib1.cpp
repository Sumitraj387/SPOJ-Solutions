/*Solution of this problem : https://codeforces.com/contest/991/problem/D*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define mk make_pair

int main()
{  
  
  string s[2];
  cin>>s[0]>>s[1];
  ll n=(ll)s[0].size();
  ll cp=0;

  for(ll i=0;i<n;i++)
  {  
    
    if(s[0][i]=='0'&&s[1][i]=='0')
    {
      if(s[0][i-1]=='0'&&i-1>=0)
      {
          cp++;
          s[0][i-1]='X';
          s[0][i]='X';
          s[1][i]='X';

      }
      else if(s[1][i-1]=='0'&&i-1>=0)
      {
         cp++;
          s[1][i-1]='X';
          s[0][i]='X';
          s[1][i]='X';
      }
      else if(s[0][i+1]=='0'&&i+1<n)
      {
         cp++;
          s[0][i+1]='X';
          s[0][i]='X';
          s[1][i]='X';
      }
      
      else if(s[1][i+1]=='0'&&i+1<n)
      {
          cp++;
          s[1][i+1]='X';
          s[0][i]='X';
          s[1][i]='X';
      }
    } 
    
    
  

  }
  cout<<cp<<endl;
  


 }
  
              
              

  

  
  
          
      
    







