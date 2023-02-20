#include <iostream>
#include "Config.h"

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << argv[0] << " Version " << BossBox_VERSION_MAJOR << "." << BossBox_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    return 0;
}