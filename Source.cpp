#include <iostream>
#include <set>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    std::set<int, std::greater<int>> unique_nums;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        unique_nums.insert(x);
    }

    for (const auto& val : unique_nums) {
        std::cout << val << "\n";
    }

    return 0;
}