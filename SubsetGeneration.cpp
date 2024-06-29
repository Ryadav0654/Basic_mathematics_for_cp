/*
Subset generation using Bit masking:

steps to generate the subset:

step- 1: find the size of array
step- 2: find the number of subsets (subsets = 2^n), where n = size of array
step- 3: 0 to 2^n-1 binary are bit mask to generate subsets
step- 4: bit mask jo bit setbit usake index ko array[index] ki value subset me include kar denge 
step -5: return subsets vector or array

*/

#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> Subsets(vector<int> &nums){

    int n = nums.size();

    int subset_cnt = (1 << n);

    vector<vector<int>> subsets;
    for(int mask = 0; mask < subset_cnt; mask++){
        vector<int> subset;
        for(int i = 0; i < n; i++){
            if((mask & (1 << i) )!= 0){
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }

    return subsets;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter n: " ;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++ ){
        cin >> nums[i];
    }

    auto all_subsets = Subsets(nums);
    for(auto subset : all_subsets){
        for(int ele : subset){
            cout << ele  <<  " ";
        }
        cout << endl;
    }
    return 0;
};

/*
### Approch:

1. Input: Take a vector `nums` containing integers.
2. Initialization: Determine the number of elements `n` in `nums`.
3. Subset Count: Calculate `2^n`, which gives the total number of subsets possible.
4. Subset Generation:
   - Use a bitmask approach to generate subsets. Each subset corresponds to a unique bitmask where each bit represents whether an element from `nums` is included in that subset.
   - Iterate through all possible masks (`0` to `2^n - 1`).
   - For each mask, iterate through each bit to decide inclusion of elements in the subset.
   - Build subsets based on the bits set in the mask and store them in a vector of vectors (`subsets`).
5. Return the vector `subsets` containing all subsets of `nums`.

*/

/*
- Time Complexity: O(n* 2^n)
- Space Complexity: O(2^n)
*/