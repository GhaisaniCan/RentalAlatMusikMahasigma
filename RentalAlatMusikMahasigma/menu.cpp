#include <iostream>
#include <stdlib.h>
#include "menu.h"





         

         allMenus::allMenus() {
            bool cont = true;
         }
        
        void allMenus::menu() {
            system("cls");
            std::cout << "==========*==========";
            std::cout << "\n[1] Sign in\n[2] Login\n[3] Charmony Dove\n[4] Exit\n";
            int mainMenuOption;
            std::cin >> mainMenuOption;
            switch (mainMenuOption) {
            case 1:
                std::cout << "500";
                //signIn();
                break;
            case 2:
                std::cout << "50";
                //logIn();
                break;
            case 3:
                std::cout << "One day, after dinner, while my younger sister and I were lounging about in Mr. Gopher Wood's yard, we spotted a fledgling Charmony Dove all on its own. That baby bird was tiny, it didn't even have all of its feathers, and it couldn't sing. When we found it, it was already on its last breath, having fallen into a shrub -- probably abandoned by its parents. We decided to build a nest for it right there and then. However, thinking back, that winter was unusually cold, with fierce winds at night in the yard, not to mention the many poisonous bugs and wild beasts in the vicinityc It was clear that if we left the fledgling in the yard, it stood no chance of surviving until spring. So, I suggested we take it inside, place it on the shelf by the window, and asked the adults to fashion a cage for it. We decided that when it regained its strength enough to spread its wings, we would release it back into the wild. The tragic part -- something that we'd never considered -- was that this bird's fate had already been determined long before this momentc Its destiny was determined by our momentary whim. Now, I pass the power of choice to you all. Faced with this situation, what choice would you make? Stick to the original plan, and build a nest with soft net where the Charmony Dove fell? Or build a cage for it, and feed it, giving it the utmost care from within the warmth of a home? I eagerly await your answer.\n";
                break;
            case 4:
                std::cout << "weeee";
                break;
            default:

                break;
            };
        }

        bool allMenus::exitMenu() {
            system("cls");
            std::cout << "==========*==========\n";
            std::cout << "Would you like to continue operations?\n";
            std::cout << "[1] Yes\n[2] No\n";
            int exitMenuOption;
            std::cin >> exitMenuOption;
            switch (exitMenuOption)
            {
            case 1:
                return true;
                break;
            default:
                return false;
                break;
            }
        }
