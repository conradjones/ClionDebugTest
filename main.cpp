#include <iostream>
#include <variant>

template <typename... Args>
struct MadeUp {
    using type = std::variant<Args...>;
};

int main()
{
    // PUT BREAK POINT ON BELOW LINE
    MadeUp<int, float, double>::type value;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}