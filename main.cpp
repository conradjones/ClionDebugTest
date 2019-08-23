#include <iostream>
#include <variant>

template <typename... Args>
struct MadeUp {
    using type = std::variant<Args...>;
};

int main()
{
    MadeUp<int, float, double>::type value;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}