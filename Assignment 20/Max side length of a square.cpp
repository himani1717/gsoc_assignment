class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m = mat.size(), n = mat[0].size(), left = 0, right = min(m, n);
        vector<vector<int>> sums(m + 1, vector<int>(n + 1));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                sums[i][j] = mat[i - 1][j - 1] + sums[i - 1][j] + sums[i][j - 1] - sums[i - 1][j - 1];
            }
        }
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (squareExisted(sums, threshold, mid)) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return right;
    }
    bool squareExisted(vector<vector<int>>& sums, int threshold, int len) {
        for (int i = len; i < sums.size(); ++i) {
            for (int j = len; j < sums[0].size(); ++j) {
                if (sums[i][j] - sums[i - len][j] - sums[i][j - len] + sums[i - len][j - len] <= threshold) return true;
            }
        }
        return false;
    }
};
