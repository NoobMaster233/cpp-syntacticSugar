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

    {
        // C++ 14 的Raw字符串
        std::string aaa = R"(asd "asdfas"""asdfasdfasdf" )";
        std::cout << aaa << std::endl; // aaa是asd "asdfas"""asdfasdfasdf"
        aaa = R"haha(这里面随便写“”""):)haha";
        std::cout << aaa << std::endl; // aaa是这里面随便写“”""):
    }
    return 0;
}