//Left Rotate an array by d place

//Brute force solution

#include<bits/stdc++.h>
using namespace std;
void Rotatetoleft(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
    //firstly we are creating an array of k size;
  int temp[k];
  // Copy the first k element into the temp array
  for(int i=0;i<k;i++){
    temp[i]=arr[i];
  }
  //Shift n-k element from last by k position to the left
  for(int i=0;i<n-k;i++){
    arr[i]=arr[i+k];
  }
  //copy the element into the main array from the temp array
   for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i - n + k];
  }
}
int main(){
    
int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  Rotatetoleft(arr, n, k);
  cout << "After Rotating the elements to left " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}


//optimal solution

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         vector<int>temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }
    
};