 //Trapping Rain Water 

#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int T ; 
	cin>>T;
	
	while(T--)
	{
	    int n ; 
	    cin>>n;
	    int arr[n];
	    
	    for(int i = 0 ;i<n ; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    
	    int arr_rm[n] ; 
	    int arr_lm[n] ; 
	    arr_lm[0]  = arr[0]; // LeftMax Waterlevel
	    arr_rm[n-1] = arr[n-1] ;   //Rightmax WaterLevel
	    

	    
	    for(int i = 1 ; i< n ; i++)
	    {
	       arr_lm[i]  = max(arr_lm[i-1] ,arr[i]) ; //Finding the leftmost max Value
	         
	    }
	    
	    for(int i = n-2 ; i >= 0 ; i--)
	    {
	        arr_rm[i] = max(arr_rm[i+1] , arr[i]) ; //Finding the rightmost max Value
	        
	    }
	    
	    int lvl = 0 ; 

	    
	    for(int i = 0 ; i< n ; i ++)
	    {
	        lvl= lvl+ ( (min(arr_lm[i] ,arr_rm[i])) - arr[i] );  //Taking the minimum of the max values for

	    }														//the water to be trapped , the minimum hight will act as barrier
	    
	    cout<<lvl<<"\n" ; 
	   
	   
	}
	return 0;
}