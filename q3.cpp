//first include the library 
#include <iostream>
using namespace std;
int main(){
	int a;
	cout<< "give me a number"<<endl;
	cin>> a;
	for(int i=0;i<a;i++){
		// print spaces
		for(int j=1;j<(a-i);j++){
		cout<< "  ";
		}
		//print stars
		for(int j=0;j<a;j++){
		cout<< "* ";
		}		
	cout<<  endl;
	}
return 0;
}

