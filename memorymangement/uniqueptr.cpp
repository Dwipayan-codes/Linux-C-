#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> p1 =
        std::make_unique<int>(10);

    std::cout<< "P1 " << *p1 <<std::endl;

    std::unique_ptr<int> p2 = std::move(p1);

    std::cout<< "P2 " << *p2 <<std::endl;

    std::cout<< "P1 " << *p1 <<std::endl;

    return 0;
}
