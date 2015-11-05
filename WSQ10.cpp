#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(){
	
	vector <int> vec(10);
	int x=0;
	int y;
	float sum, ave, est,pot;
	
	
	
	for(x=0; x<10; x++){
		
		cout<<"Enter the numbers: "<<endl;
		cin>>y;
		vec[x]=y;
		
		
	}
	
	sum=vec[0]+vec[1]+vec[2]+vec[3]+vec[4]+vec[5]+vec[6]+vec[7]+vec[8]+vec[9];
	ave=sum/10;
	pot=((vec[0]-ave)*(vec[0]-ave))+((vec[1]-ave)*(vec[1]-ave))+((vec[2]-ave)*(vec[2]-ave))+((vec[3]-ave)*(vec[3]-ave))+((vec[4]-ave)*(vec[4]-ave))+((vec[5]-ave)*(vec[5]-ave))+((vec[6]-ave)*(vec[6]-ave))+((vec[7]-ave)*(vec[7]-ave))+((vec[8]-ave)*(vec[8]-ave))+((vec[9]-ave)*(vec[9]-ave));
	est= sqrt(pot/9);
	
	cout<<"Your total is: "<<sum<<endl;
	cout<<"Your average is: "<<ave<<endl;
	cout<<"Your standard deviation is: "<<est<<endl;
	
	return 0;
}