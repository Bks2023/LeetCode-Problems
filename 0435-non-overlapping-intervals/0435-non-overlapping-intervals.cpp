class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) {
            return 0;
        }

        // Sort intervals based on end times
        sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            return a[1] < b[1];
        });

        int ans = 0;
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            // If the current interval overlaps with the previous one, remove the interval with a later end time
            if (intervals[i][0] < end) {
                ans++;
            } else {
                end = intervals[i][1];
            }
        }

        return ans;
        
    }
};