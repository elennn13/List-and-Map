#include <iostream>
#include <string>//библиотека, хранящая в себере реализацию класса map
#include <list>//библиотека, хранящая в себере реализацию класса list(список)
#include <map> // ассоциотивная коллекция



int main() {
    setlocale(LC_ALL, "ru");
    int n;


    // Класс List
    
    std::list<int> list1;
    list1.push_back(7); // добавляем элемент в конец списка или просто первый элемент если нет ничего
    list1.push_back(105);
    list1.push_back(42);
    list1.push_front(555); //  возвращает ссылку на первый элемент
    //list1.pop_back(); // удаление элемента
   //list1.pop_front(); // удаление элемента

    //for (auto it = list1.cbegin(); it != list1.cend(); ++it)// 1 варивант
        for (auto el : list1) // foreach// 1 варивант
        std::cout<< el << ' ';

        std::cout << std::endl;

        // итераторы
        auto place = list1.begin();
        std::advance(place, 3);
        list1.insert(place, 1000); //поставим элемент в предпоследнюю позицию/ передает на конкретное местоположение

        std::cout << *place << std::endl;

        place = list1.begin();
        ++place;
        list1.erase(place); // erase удаляет элемент

       for (auto el : list1) // foreach
       std::cout << el << ' ';
       std::cout << std::endl;
       


    // Класс Map

    std::pair<int, std::string> pair(11, "Hello");
    std::cout << pair.first << std::endl;  //11
    std::cout << pair.second << std::endl; //Hello

    std::map<std::string, int> map1;
    map1.insert(std::pair<std::string, int> ("Tom", 18)); // с помощью конструктора
    map1.insert(std::make_pair("Bob", 25)); // с помощью функции
    map1.emplace("Elisa", 23); 
    map1["Mike"] = 50; // самый удобный и часто используемый способ

    std::cout << map1["Mike"] << std::endl;
    std::cout << map1.find("Mike")->second <<std::endl;//find возвращает пару на объект
    map1.erase("Bob");// удаление боба 

    map1.emplace("Tom", 20);// добавляем еще тома, если есть еще том то изменений не будет
    map1["Tom"] = 21;// тому 21 год


    for (auto key : map1)
        std::cout << key.first <<" is " << key.second << " years old " << std::endl;

    
return 0;

}

