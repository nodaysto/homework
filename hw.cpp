#include <iostream>
#include <string>
using namespace std;

/*
 Создайте класс Game в экземпляре которого должны быть поле, которое содержит название игры и жанр. 
 Присвойте полям модификаторы доступа public и private соответственно.
 Создайте экземпляр класса и выведите на экран значения полей из экземпляра. 
*/

class Game
{
public:

    string name; // Поле названия

    Game (string cname, string cgenre) // Конструктор класса
    {
        name = cname;   // Присваивание названия
        genre = cgenre; // Присваивание жанра
    }

    string get_genre () // Геттер жанра
    {
        return genre;
    }

private:
    string genre; // Поле жанра
};

int main ()
{
    setlocale (LC_ALL, "ru");

    Game game1("Forza", "Races");   // Создание экземпляра игры

    cout << "Игра: " << game1.name << endl
    << "Жанр: " << game1.get_genre();
}