#include <iostream>

void menu()
{
    std::cout << "\n _________________________________";
    std::cout << "\n|                                 |";
    std::cout << "\n|     Главное меню справочника    |";
    std::cout << "\n|                                 |";
    std::cout << "\n|---------------------------------|";
    std::cout << "\n| 1: Все данные из файла.         |";
    std::cout << "\n| 2: Фильтр по времени отправления|";
    std::cout << "\n| 3: Просмотр нужного маршрута.   |";
    std::cout << "\n|---------------------------------|";
    std::cout << "\n| 4: Добавление новог маршрута.   |";
    std::cout << "\n| 5: Изменение деталей маршрута.  |";
    std::cout << "\n|---------------------------------|";
    std::cout << "\n| 6: Удаление маршрута из базы.   |";
    std::cout << "\n| 7: Удалить все маршруты.        |";
    std::cout << "\n|---------------------------------|";
    std::cout << "\n|                                 |";
    std::cout << "\n|        8: Купить билеты!        |";
    std::cout << "\n|                                 |";
    std::cout << "\n|---------------------------------|";
    std::cout << "\n|                                 |";
    std::cout << "\n|     0: Выход из программы.      |";
    std::cout << "\n|_________________________________|\n";
}
void poisk()
{
    std::cout << "\n _________________________________";
    std::cout << "\n|   Свойства для поиска автобуса  |";
    std::cout << "\n|---------------------------------|";
    std::cout << "\n|                                 |";
    std::cout << "\n| 1: Число свободных билетов.     |";
    std::cout << "\n| 2: Дата выезда.                 |";
    std::cout << "\n| 3: Пункт назначения.            |";
    std::cout << "\n| 4: Время отправления.           |";
    std::cout << "\n| 5: Время прибытия.              |";
    std::cout << "\n| 0: Выход.                       |";
    std::cout << "\n|_________________________________|\n";
}