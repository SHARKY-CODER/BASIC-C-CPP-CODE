#include<iostream>
using namespace std;
int main()
{
    int x[5];
    cout<<"enter 5 numbers:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>x[i];
    }
    cout<<"entered elements are"<<endl;
	 for(int i=0;i<5;i++)
	{
		cout<<x[i]<<"\n";
	}
	
	return 0;
}