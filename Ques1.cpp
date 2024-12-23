#include <iostream>
using namespace std;
int majorityElement(int nums[], int n) {
 int candidate = nums[0];
 int count = 1;
 for (int i = 1; i < n; i++) {
 if (nums[i] == candidate) {
 count++;
 } else {
Name:- Deepu Kumar UID:- 22BCS10067
 count--;
 } 
 if (count == 0) { 
 candidate = nums[i];
 count = 1;
 } 
 } 
 return candidate;
} 
int main() { 
 int n;
 cout << "Enter the size of the array: ";
 cin >> n; 
 int* nums = new int[n]; // Dynamically allocating memory for the array
 cout << "Enter the elements of the array: ";
 for (int i = 0; i < n; i++) {
 cin >> nums[i];
 } 
 
 int result = majorityElement(nums, n);
 cout << "The majority element is: " << result << endl;
 delete[] nums; // Deallocate the memory
 return 0;
}
