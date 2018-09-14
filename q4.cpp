//first include the library 
#include <iostream>
using namespace std;
int main(){
	int a,j,i;
	cout<< "give me a number"<<endl;
	cin>> a;
	for(i=0;i<a;i++){
		// print spaces
		for(j=1;j<(a-i);j++){
		cout<< "  ";
		}
		//print stars
		if(i==0 || i==(a-1)){		
			for(j=0;j<a;j++){
			cout<< "*    ";
			}
			cout<<endl;
		}
		else{
			//print star
			cout<<"*";
			//print spaces
			for(j=0;j<(a-2);j++){
			cout<<"     ";
			}
			//print end stars
			cout<<"    *";
			cout<<endl;
		}		
	cout<<  endl;
	}
return 0;
}

