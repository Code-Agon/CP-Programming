/**
https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
Given an array of n numbers, sorted in non-decreasing order, and k queries. 
For each query, print the minimum index of an array element not less than the given one.

**/
#include <iostream>
using namespace std;
int
search (int arr[], int n, int k)
{
  int ma = -1;
  int lo = 0, hig = n - 1;
  while (lo <= hig)
    {
      int mid = lo + (hig - lo) / 2;
      if (arr[mid] <k)
	{
 
	  lo = mid + 1;
	  
	}
      else{
          
	hig = mid - 1;
	ma=mid;
      }
    }
  return ma + 1;;
}
 
int
main ()
{
  int t, k;
  cin >> t >> k;
  int arr[t];
  for (int i = 0; i < t; i++)
    cin >> arr[i];
  for (int i = 0; i < k; i++)
    {
      int g;
      cin >> g;
      int bo = search (arr, t, g);
      if(bo==0) bo=t+1;
      cout << bo << "\n";
 
    }
 
  return 0;
}
