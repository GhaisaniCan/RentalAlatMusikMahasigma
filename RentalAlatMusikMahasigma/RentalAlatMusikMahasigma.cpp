#include <iostream>
#include <stdlib.h>
#include "menu.h"

int main()
{
    allMenus mnu;
    do {
        mnu.menu();
        std::cin.get();
        std::cin.get();
    } while (mnu.exitMenu());
}

