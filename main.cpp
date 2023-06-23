#include <iostream>
#include <optional>

std::optional<int> test_optional () {
    return std::nullopt;
}

int main () {

    {
        // 1. optional语法糖，可以直接判断返回是否有效，以下三种方法是等价的
        if (auto res = test_optional()) {
            // ...
        }
        if (auto res = test_optional(); res) {
            // ...
        }
        if (auto res = test_optional(); res == std::nullopt) {
            // ...
        }
    }
    return 0;
}