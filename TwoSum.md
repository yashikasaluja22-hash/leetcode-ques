#Two Sum Question
*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.*
##now above is the as it is give leetcode ques and below is its meaning
######You are given:

An array of integers → nums

A number → target

Your task is:

👉 Find two different numbers in the array
👉 Such that when you add them, their sum equals the target
👉 Return their indices (positions) in the array

❗ Important Conditions

1.You cannot use the same element twice.
2.There is exactly one valid answer.
3.You can return the indices in any order.
u can use same no. like 3,3 but indices (matlab index) shud be different of both 3, woh matlab hai diff elements se