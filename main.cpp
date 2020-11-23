	#include <bits/stdc++.h>
	using namespace std;
	#define ll long long
	#define loop(i, n) for(int i = 0; i < n; i++)
	
	ll * z_algo(string s)
	{
		 		ll n=s.size();
		ll *z=new ll[n];
		ll l=0,r=0;
		
		for(int i = 1; i < n; i++)
		{
			if(i>r)
			{
				l=r=i; //set l and r equal to i,,readusting pointers
				while(r<n and s[r-l]==s[r])
				r++;
				r--;// for one extra increment,,reduce it by 1 after the loop
				
				z[i]=r-l+1;
			}
			else
			{
				ll j=i-l; // if i is between l and r
				if(z[j]<r-i+1)
				z[i]=z[j];
				else
				{
				l=i;
				while(r<n and s[r-l]==s[r])r++;
				r--; 
				z[i]=r-l+1;
				}
					
			}
		}
		
		return z;
	}
	
	
	
	void solve1()
	{
	string s="abcd$abjkabcdeklabcabcdl";
	ll *z=z_algo(s);
	int n=s.size();
for(int i=5;i<n;i++)
cout<<z[i]<<" ";
	}
	
	
	int main() {
		ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
		solve1();
		//call fun for one program
	
		return 0;
	}
