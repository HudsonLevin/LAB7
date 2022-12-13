#include<iostream>

using namespace std;

int main(){
	
	int i = 0;
	int P[5000];
	int k,result;
	cout<<"Please input k: ";
	cin >>k ;
	
	if(k>0){
	result = 0;
	    while(i < 5000)
	    {
		    P[i] = 2*i+1;
		        if(P[i]%k == 0)
		        {
		            result -= P[i];
		        }else{
		            result += P[i];
		        }
		    i++;
	    }
	    cout<<"Result = "<<result;
	    }
	    else
	    {
	        cout<<"Invalid input!!!";
	}
	return 0;
}