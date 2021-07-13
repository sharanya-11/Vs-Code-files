// C++ program to count all the pairs that
// hold the condition i + j = arr[i] + arr[j]
#include <iostream>
using namespace std;

// Function to return the count of pairs that
// satisfy the given condition
int CountPairs(int arr[], int n)
{
	int count = 0;

	// Generate all possible pairs and increment
	// the count if the condition is satisfied
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((i + j) == (arr[i] + arr[j]))
				count++;
		}
	}
	return count;
}

// Driver code
int main()
{
	int arr[] = { 1, 0, 3, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << CountPairs(arr, n);
	return 0;
}
