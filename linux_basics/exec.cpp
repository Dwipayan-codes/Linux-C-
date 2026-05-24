#include <iostream>
#include <unistd.h>

int main()
{
    std::cout << "Running ./ex using exec" << std::endl;

    execl("./ex", "./ex", nullptr);

    std::cout << "Exec failed" << std::endl;

    return 0;
}
