// C++ program to Find the missing element

#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[], int N)
{
	int i;
	int temp[N + 1];
	for(int i = 0; i <= N; i++){
	temp[i] = 0;
	}

	for(i = 0; i < N; i++){
	temp[arr[i] - 1] = 1;
	}


	int ans;
	for (i = 0; i <= N ; i++) {
		if (temp[i] == 0)
			ans = i + 1;
	}
	cout << ans;
}

/* Driver code */
int main()
{
	int arr[30],n;
	cout<<"\nEnter size";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element";
		cin>>arr[i];
	}
	findMissing(arr, n);
}
