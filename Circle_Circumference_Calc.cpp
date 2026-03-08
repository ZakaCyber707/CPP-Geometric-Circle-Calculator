#include<iostream>
using namespace std;
int main(){
	
	float radius=0.0;
	const float pi=3.14;     //const mn value change ni ho skte-- y const datatype sy pehly lgana hy
	float circumfarence=0.0;
	
	cout<<"Enter radius value\n";
	cin>>radius;
	
	
	circumfarence=2*radius*radius*pi;
	cout<<"circumfarece is:   "<<circumfarence;
	
	
}
