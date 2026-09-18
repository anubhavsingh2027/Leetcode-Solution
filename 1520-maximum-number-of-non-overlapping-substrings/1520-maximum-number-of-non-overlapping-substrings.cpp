class Solution {
public:
  vector<string> maxNumOfSubstrings(string s) {
        int n = s.size();
        vector<int> start(26, n);
        vector<int> end(26, -1);

        // Step 1: find first and last occurrence for each character
        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'a';
            start[idx] = min(start[idx], i);
            end[idx] = max(end[idx], i);
        }

        vector<pair<int,int>> intervals;

        // Step 2: expand intervals to cover all characters within
        for (int i = 0; i < 26; i++) {
            if (start[i] == n) continue;

            int left = start[i];
            int right = end[i];
            bool valid = true;

            for (int j = left; j <= right; j++) {
                int idx = s[j] - 'a';
                if (start[idx] < left) {
                    valid = false;
                    break;
                }
                right = max(right, end[idx]);
            }

            if (valid) intervals.emplace_back(left, right);
        }

        // Step 3: sort intervals by end index
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });

        vector<string> result;
        int prev_end = -1;

        // Step 4: greedily select non-overlapping intervals
        for (auto &interval : intervals) {
            if (interval.first > prev_end) {
                result.push_back(s.substr(interval.first, interval.second - interval.first + 1));
                prev_end = interval.second;
            }
        }

        return result;
    }
};
