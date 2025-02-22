/*
Question:- 
An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.
Write a program to return the number of arithmetic subarrays of a given integer array.

Input:-
- First line takes input n the size of array 
- next n inputs of the array are taken

Output:-
- returns an integer value of number of arithmetic slices in the given integer array

Example:-
Input:
5
1 2 3 4 5

Output:
Number of Arithmetic Slices = 6

*/




#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
		// if nums size is less than 3 return false
        if(nums.size() < 3)
            return 0;
        
        int cnt = 0, diff;
        
        for(int i = 0; i<nums.size()-2; ++i)
        {
			// storing diff of first 2 elements
            diff = nums[i+1] - nums[i];
			
			// checking for consecutive elements with same difference.
            for(int j = i+2; j<nums.size(); ++j)
            {
				// if we find the same diff of next 2 elements
				// this means we  find consecutive elements
				// increase the Count
                if(nums[j] - nums[j-1] == diff)
                    ++cnt;
                else
				// break as we need to cnt for consecutive diff elements
                    break;
            }
        }
		// return cnt
        return cnt;
    }
};


int main(){

   Solution ob;
   int n;
   cin>>n;
   int c;
   vector<int> ve;
   for(int i = 0; i<n; i++)
   {
      cin>>c;
      ve.push_back(c);
      c = 0;
   }
   
   cout <<"Number of Arithmetic Slices = " <<(ob.numberOfArithmeticSlices(ve));
}
