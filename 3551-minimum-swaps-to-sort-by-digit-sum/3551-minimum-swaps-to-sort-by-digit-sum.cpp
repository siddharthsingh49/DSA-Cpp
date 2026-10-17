class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<tuple<int, int, int>> arr;

        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int sum = 0;

            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }

            arr.push_back({sum, nums[i], i});
        }

        sort(arr.begin(), arr.end());

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i])
                continue;

            int j = i;
            int count = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = get<2>(arr[j]);
                count++;
            }

            swaps += count - 1;
        }

        return swaps;
    }
};