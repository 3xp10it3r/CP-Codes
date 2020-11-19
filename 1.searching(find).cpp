#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	//for compilation purpose please ignore this
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int arr[] = {2,46,76,2,43,4};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;
	auto it = find(arr,arr+n,key);
	int index = (it-arr);
	
	if(index==n)
		cout<<key<<" not present"<<endl;
	else
		cout<<key<<" present at index "<<index;

	return 0;
}