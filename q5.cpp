//first include the library 
#include <iostream>
using namespace std;
int main(){
	int a,j,i;
	cout<< "give me a number"<<endl;
	cin>> a;
	for(i=0;i<a;i++){
		// print spaces
		for(j=0;j<i;j++){
		cout<< " ";
		}	
		// print stars
		for(j=0;j<a;j++){
		cout<< "*  ";
		}	
	cout<<  endl;
	}
return 0;
}

