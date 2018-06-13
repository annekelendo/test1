#include <iostream>
using namespace std;

int main()
{
    int i; 
    int n = 0;
	int r = 1; 
	int z=0;
	int d=0;
    setlocale(0, "");
    cout<< " N = " ;
	cin >> n ;
	for (i =0 ; z<=n ; i++)
    	{ d= i;
		while ((d/=10) > 0) r++; 
    	 //cout<<"i = " << i<<" "; 
		 //cout<<"r = "<<r<< " "; 
    	 if ((i % r) == 0) 
		 	{cout << i << " , " ;
		 	 z++;}; 
    	}
    return 0;
}
