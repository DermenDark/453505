#include <begin.h>

void funk_menu(){
    std::string num_funk="0";
    bool problem=false;

    do{ if(problem){std::cout << "\nНет такой функции. ";}
        std::cout << "Ведите нужную вам функцию:";
        std::getline(std::cin, num_funk);

        if (num_funk.empty() || num_funk.length() > 1) {
            problem = true;
            continue;
        }

        switch (num_funk[0]) {
            case '1':
                std::cout << "Вы выбрали функцию 1.\n";

                problem = false;
                break;
            case '2':
                std::cout << "Вы выбрали функцию 2.\n";

                problem = false;
                break;
            case '3':
                std::cout << "Вы выбрали функцию 3.\n";

                problem = false;
                break;
            case '4':
                std::cout << "Вы выбрали функцию 4.\n";

                problem = false;
                break;
            case '5':
                std::cout << "Вы выбрали функцию 5.\n";

                problem = false;
                break;
            case '6':
                std::cout << "Вы выбрали функцию 6.\n";

                problem = false;
                break;
            case '7':
                std::cout << "Вы выбрали функцию 7.\n";                

                problem = false;
                break;
            case '8':
                std::cout << "Вы выбрали функцию 8.\n";

                problem = false;
                break;
            case '0':
                std::cout << "Выход из меню.\n";

                problem = false;  
                break;
            default:
                problem = true; 
                break;
        }
    }while (problem);

}