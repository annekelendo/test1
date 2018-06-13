#include <iostream>
using namespace std;

int main()
{
    int i; 
    int n = 0;
	int r = 1; 

	int z=1;
	int d=0;
    setlocale(0, "");
    cout<< " N = " ;
	cin >> n ;
	for (i =0 ; z<=n ; i++)
    	{ d= i;
		while ((d/=10) > 0) r++; 
    	 if ((i % r) == 0) 
		 	{cout << i ;
			 if(z==n) cout<< " . ";
			 	else
				 cout << " , " ;
		 	 z++;}; 
    	}
    return 0;
}
