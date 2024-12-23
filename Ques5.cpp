#include <iostream> 
#include <numeric> 
#include <algorithm> 
using namespace std;
bool canAssignJobs(int jobs[], int n, int k, int max_time) { 
 int workers = 1, current_time = 0;
 for (int i = 0; i < n; i++) {
 if (current_time + jobs[i] > max_time) { 
 workers++;
 current_time = jobs[i];
 if (workers > k) return false;
 } else { 
 current_time += jobs[i];
 } 
 } 
 return true;
} 
int minimumTimeRequired(int jobs[], int n, int k) { 
 int left = *max_element(jobs, jobs + n);
 int right = accumulate(jobs, jobs + n, 0);
 while (left < right) { 
 int mid = left + (right - left) / 2;
 if (canAssignJobs(jobs, n, k, mid)) { 
 right = mid;
 } else { 
 left = mid + 1;
 } 
 } 
 return left;
} 
int main() { 
 int n, k;
 cin >> n >> k;
 int jobs[n];
 for (int i = 0; i < n; i++) {
 cin >> jobs[i];
 }
 int result = minimumTimeRequired(jobs, n, k);
 cout << result << endl;
 return 0;
}
