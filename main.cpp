#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>

using namespace std;

pair<int, int> twoSumBruteForce(const vector<int>& nums,int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}


pair<int, int> twoSumHash(const vector<int>& nums, int target)
{
    unordered_map<int, int> index;

    for (int i = 0; i < nums.size(); i++)
    {
        int needed = target - nums[i];

        if (index.count(needed))
        {
            return {index[needed], i};
        }

        index[nums[i]] = i;
    }

    return {-1, -1};
}

int main()
{
    // Original test
    cout << "Original Test:" << endl;

    int target = 24;

    vector<int> nums =
        {15, 4, 18, 8, 19, 22, 24, 59, 59, 20, 18, 12, 36, 42, 9};

    pair<int, int> result = twoSumBruteForce(nums, target);

    cout << "twoSumBruteForce:" << endl;

    if (result.first != -1)
    {
        cout << "Indices: " << result.first << ", " << result.second << endl;

        cout << "Values: " << nums[result.first] << ", " << nums[result.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    cout << "\ntwoSumHash:" << endl;

    pair<int, int> answer = twoSumHash(nums, target);

    if (answer.first != -1)
    {
        cout << "Indices: " << answer.first << ", " << answer.second << endl;

        cout << "Values: " << nums[answer.first] << ", " << nums[answer.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    cout << " " << endl;

    // Test 1: Not supposed to find a pair
    cout << "Test 1: No pair " << endl;

    int target1 = 1;
    vector<int> nums1 = {2, 7, 11, 15};

    pair<int, int> result1 = twoSumBruteForce(nums1, target1);

    cout << "twoSumBruteForce:" << endl;

    if (result1.first != -1)
    {
        cout << "Indices: " << result1.first << ", " << result1.second << endl;

        cout << "Values: " << nums1[result1.first] << ", " << nums1[result1.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    cout << "\ntwoSumHash:" << endl;

    pair<int, int> answer1 = twoSumHash(nums1, target1);

    if (answer1.first != -1)
    {
        cout << "Indices: " << answer1.first << ", " << answer1.second << endl;

        cout << "Values: " << nums1[answer1.first] << ", " << nums1[answer1.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    cout << " " << endl;


    // Test 2: negative number
    cout << "Test 2: Negative number" << endl;

    int target2 = 5;
    vector<int> nums2 = {-3, 3, 8, 12};

    pair<int, int> result2 = twoSumBruteForce(nums2, target2);

    cout << "twoSumBruteForce:" << endl;

    if (result2.first != -1)
    {
        cout << "Indices: " << result2.first << ", " << result2.second << endl;

        cout << "Values: " << nums2[result2.first] << ", " << nums2[result2.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    cout << "\ntwoSumHash:" << endl;

    pair<int, int> answer2 = twoSumHash(nums2, target2);

    if (answer2.first != -1)
    {
        cout << "Indices: " << answer2.first << ", " << answer2.second << endl;

        cout << "Values: " << nums2[answer2.first] << ", " << nums2[answer2.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    cout << " " << endl;


    // Test 3:  two numbers that are the same
    cout << "Test 3: Two of the same " << endl;

    int target3 = 14;
    vector<int> nums3 = {7, 9, 2, 7};

    pair<int, int> result3 = twoSumBruteForce(nums3, target3);

    cout << "twoSumBruteForce:" << endl;

    if (result3.first != -1)
    {
        cout << "Indices: " << result3.first << ", " << result3.second << endl;

        cout << "Values: " << nums3[result3.first] << ", " << nums3[result3.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    cout << "\ntwoSumHash:" << endl;

    pair<int, int> answer3 = twoSumHash(nums3, target3);

    if (answer3.first != -1)
    {
        cout << "Indices: " << answer3.first << ", " << answer3.second << endl;

        cout << "Values: " << nums3[answer3.first] << ", " << nums3[answer3.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    cout << " " << endl;


    // Test 4: All nums the same
    cout << "Test 4: All matching nums" << endl;

    int target4 = 20;
    vector<int> nums4 = {1, 1, 1, 1, 1};

    pair<int, int> result4 = twoSumBruteForce(nums4, target4);

    cout << "twoSumBruteForce:" << endl;

    if (result4.first != -1)
    {
        cout << "Indices: " << result4.first << ", " << result4.second << endl;

        cout << "Values: " << nums4[result4.first] << ", " << nums4[result4.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    cout << "\ntwoSumHash:" << endl;

    pair<int, int> answer4 = twoSumHash(nums4, target4);

    if (answer4.first != -1)
    {
        cout << "Indices: " << answer4.first << ", " << answer4.second << endl;

        cout << "Values: " << nums4[answer4.first] << ", " << nums4[answer4.second] << endl;

        cout << "Valid: Yes" << endl;
    }
    else
    {
        cout << "No pair found" << endl;
        cout << "Valid: No" << endl;
    }

    return 0;
}

/*
Brute Force:
Because the BruteForce method uses two nested loops, it essentially checks every 
number until it finds a pair, using O(n^2) for time complexity, and O(1) for space 
complexity. O(n^2) is the complexity because as input size grows, so does the comparison size.
As for O(1), space complexity is just O because there is not extra space, more specifically data
structres that grow with input.

Hash Map: 
Hash map has a more simple time and space complexity. Because no nested loop in involved its 
O(n) because the vector is searched only one time, and then cheecks each number. For space 
complexity, it is also O(n) the indexes get stored into the hash map.

The optomized method is faster because rather than going through the vector and comparing each number
to see about any possible pairs, the hash stores the number and sees if that one number has
and finds a match that equals the target. Long story short, it is much better for larger vectors, and
more efficient.


*/
