#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int x = 0, y = 0, cx = 0, cy = 0;
        for (const int& num : nums) {
            if ((cx == 0 || num == x) && num != y) {
                x = num;
                cx++;
            } else if (cy == 0 || num == y) {
                y = num;
                cy++;
            } else {
                cx--;
                cy--;
            }
        }
        int count = 0;
        for (auto num : nums) {
            if (x == num) {
                count++;
            }
        }
        if (count > nums.size() / 3) {
            res.push_back(x);
        }
        count = 0;
        for (auto num : nums) {
            if (y == num) {
                count++;
            }
        }
        if (count > nums.size() / 3 && x != y) {
            res.push_back(y);
        }
        return res;
    }
};
int main() {

    system("pause");
    return 0;
}