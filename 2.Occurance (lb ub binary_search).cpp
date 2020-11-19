#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	//for compilation purpose please ignore this
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int arr[]={1,2,3,4,4,4,4,5,5,6,8};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;

	bool s = binary_search(arr,arr+n,key);
	if(s==true){
		cout<<"Present"<<endl;
	}
	else{
		cout<<"absent"<<endl;
	}

	auto lb =  lower_bound(arr,arr+n,key);  //>=
	int index = lb-arr;
	cout<<"lb index "<<index<<endl;

	auto ub = upper_bound(arr,arr+n,key);
	index= ub-arr;
	cout<<"ub index "<<index<<endl;

	//frequency
	cout<<"freq "<<ub-lb;

	return 0;
}