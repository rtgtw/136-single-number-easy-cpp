/*

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.



Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4




XOR all of the values and return the counter, b/c a XOR a == 0, and a XOR 0 == a


*/

#include <iostream>
#include<vector>

class Solution {
public:

	int singleNumber(std::vector<int>& nums);


};



int Solution::singleNumber(std::vector<int>& nums) {

	//Keep a counter that will keep count of the XOR'd value after each iteration
	//the final value is the element that was only included once
	//all the ones that are included multiple times cancle out to get 0
	//the single element will be XOR'ed with 0 which will identify the solo element

	//Initialize counter
	int soloElementCounter = 0;

	//use a for loop to iterate through nums
	for (int i = 0; i < nums.size(); i++) {


		//You can also do soloElement ^= nums[i] but i want to write it out, and digest it
		soloElementCounter = soloElementCounter ^ nums[i];
		std::cout << "Counter: " << soloElementCounter << std::endl;

	}

	return soloElementCounter;

	//Time O(n) / Space O(1)

}



int main() {

	Solution solution;

	std::vector<int> nums = { 4,1,2,1,2 };

	std::cout << solution.singleNumber(nums) << std::endl;




	return 0;
}



