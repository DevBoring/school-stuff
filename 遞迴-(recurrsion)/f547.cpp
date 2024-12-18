#include <bits/stdc++.h>
	using namespace std;
	 
	void hanoi
	{
	        
	    if(l==0) return;
	    hanoi(l-1, c1, c3, c2); 
	    cout << "Ring " << l << " from " << c1 
	        << " to " << c2 << '\n'; 
	    hanoi(l-1, c3, c2, c1); 
	}
	 
	int main()
	{
	    int n;
	    cin >> n;
	    hanoi(n, '1', '3', '2'); 
	    
	    return 0;
	}
