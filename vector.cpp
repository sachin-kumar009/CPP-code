#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

// leatcode problem no. 136 

// here we are using the bitwise XOR operation 
int singleNumber(vector<int>& num){
  int ans = 0;

  for (int val : num){
    ans ^= val;
  }
  return ans;
}

// Linear search for vector to find the index of the target value
int linearSearch(vector<int>& num, int target){
  for(int i = 0; i < num.size(); i++){
    if(num[i] == target){
      return i;
    }
  }
  return -1;
}

// function to find the reverse of a vector
vector<int> reverseVector(vector<int>& num){
  vector<int> reversed;
  for(int i = num.size() -1; i >=0; i--){
    reversed.push_back(num[i]);
  }
  return reversed;
}





// WAF to majority element in an array 
int majorityElement(vector<int>& nums) {
        int n = nums.size();

        //sort
        sort(nums.begin(),nums.end());

        //freq count
        int freq = 1 , ans = nums[0];

        for(int i=1 ; i<n ; i++){
            if (nums[i]==nums[0]){
                freq++;
            } else {
                freq = 1;
                ans = nums[i];
            }

            if (freq > n/2){
                return ans;
            }
        }

        return ans; 
}



vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i<n ; i++){
                ans[i] = nums[i]*nums[i];
        }

        sort(ans.begin(),ans.end());

        return ans;
        
    }


int main(){

  vector<int> num = {-1,1,1,1,2,1};
  int target = 7;

  // cout << linearSearch(num,target) << endl;

  // vector<int> reversed = reverseVector(num);
  // for(int val : reversed){
  //   cout << val << " ";
  // }
  // cout << endl;

  cout << majorityElement(num);

  
  // // making first vector 
  // vector<int> vec; // initiallisng the vector
  // vector<int> vec2 = {1, 2, 3};
  // vector<int> vec3(3,2);

  // cout << vec.size() << endl; // size of first vector

  // cout << vec2[0] << endl;
  // cout << vec2[1] << endl;
  // cout << vec2[2] << endl;


  // cout << vec3[0] << endl;

  // for(int num : vec3){
  //   cout << num << " ";
  // } // print the vector 3 and here num stores the value of vector

  return 0;
}