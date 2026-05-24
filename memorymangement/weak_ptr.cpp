#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> p1 =
        std::make_shared<int>(100);

    std::weak_ptr<int> p2 = p1;

    std::cout << *p1 << std::endl;

    std::cout << p1.use_count() <<std::endl;

    return 0;
}
