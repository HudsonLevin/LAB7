#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string t,a,b,g ;
    cout << "Input text: ";
    cin >> t;
    a = func3(t);
    cout << "Reversed text: ";
    b = func1(t);
    g = func1(a);
    cout << b <<"\n";
    cout << "Palindrome: ";
    if(a == g){
        cout << "Yes" <<"\n";
    }else{
        cout << "No" <<"\n";
    }
    return 0;
}
