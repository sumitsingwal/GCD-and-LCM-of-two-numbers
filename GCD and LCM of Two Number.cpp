#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int gcd(int a,int b);
	int lcm(int a,int b);
	int t;
	
	cin >> t;
	int i = 0;
	
	while (i<t){
		int a,b;
	    cin >> a >> b ; 
	    
	    cout << gcd(a,b) <<" "<<lcm(a,b)<< endl;
	    i++;
	    }
	return 0;
}

int gcd(int a,int b){
	
	int x = 1;    
	if ((a == 0)&&(b == 0)){
	    return x;
	} 
	
	else if (a == b){
	    return a;
	}
	else if (a > b){
	    return gcd((a-b),b);
	}
	else {
	    return gcd(a,(b-a));
	}
	
	}

int lcm(int a,int b){
    return (a * b)/gcd(a,b);
	}
