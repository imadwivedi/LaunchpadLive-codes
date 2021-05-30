#include <iostream>

using namespace std;

bool issorted(int* A, int i,int n)
{

	if(i==n-1)
		return true;

	else
	if(A[i]<=A[i+1])
		return issorted(A, i+1,n);
	else
		return false;

}

int main(int argc, char const *argv[])
{
	int A[5] = {1, 2, 5, 7, 9};
	if(issorted(A, 0,5))
		cout<<"Sorted";
	else
		cout<<"Not Storted";
	return 0;
}
