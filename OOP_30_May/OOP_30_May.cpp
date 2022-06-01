//#include <iostream>
//using namespace std;
//
//class Room
//{
//    double square;
//    string color;
//
//};
//class Food
//{
//public:
//    int meat;
//    double sugar;
//    bool salt;
//    bool coffee;
//    int pouns;
//    string recipe;
//    int fishes;
//    
//    void Consume()
//    {
//        cout << "Salt kg " << salt << "\n";
//        cout << "Coffee " << coffee << "\n";
//        cout << "Recipe  " << recipe << "\n";
//    }
//    void Eat()
//    {
//
//    }
//    void Cook()
//    {
//
//    }
//};
//class House 
//{
//public:
//    int storeys;
//    double square;
//    bool parking;
//    bool cozy;
//    int balcony_count;
//    string address;
//    int count_of_rooms;
//    Room* rooms = new Room[3];
//    Food* rooms = new Food[3];
//    void Print()
//    {
//        cout << "Floor " << storeys << "\n";
//        cout << "Balcons " << balcony_count << "\n";
//        cout << "Adress " << address << "\n";
//    }
//    void Sale()
//    {
//
//    }
//    void Repair()
//    {
//
//    }
//};
//
////
////class Beverage
////{
////public:
////    int storeys;
////    double square;
////    bool parking;
////    bool cozy;
////    int balcony_count;
////    string address;
////    int count_of_rooms;
////    Room* rooms = new Room[3];
////
////    void Print()
////    {
////        cout << "Floor " << storeys << "\n";
////        cout << "Balcons " << balcony_count << "\n";
////        cout << "Adress " << address << "\n";
////    }
////    void Drink()
////    {
////
////    }
////    void Serve()
////    {
////
////    }
////};
////class Cat
////{
////public:
////    int storeys;
////    double square;
////    bool parking;
////    bool cozy;
////    int balcony_count;
////    string address;
////    int count_of_rooms;
////    Room* rooms = new Room[3];
////
////    void Print()
////    {
////        cout << "Floor " << storeys << "\n";
////        cout << "Balcons " << balcony_count << "\n";
////        cout << "Adress " << address << "\n";
////    }
////    void Sale()
////    {
////
////    }
////    void Repair()
////    {
////
////    }
////};
////class Human
////{
////public:
////    int storeys;
////    double square;
////    bool parking;
////    bool cozy;
////    int balcony_count;
////    string address;
////    int count_of_rooms;
////    Room* rooms = new Room[3];
////
////    void Print()
////    {
////        cout << "Floor " << storeys << "\n";
////        cout << "Balcons " << balcony_count << "\n";
////        cout << "Adress " << address << "\n";
////    }
////    void Sale()
////    {
////
////    }
////    void Repair()
////    {
////
////    }
////};
//int main()
//{
//    House AlexHouse;
//    AlexHouse.Print();
//    //cout << "Hello World!\n";
//}

#include <iostream>
using namespace std;

// описать дом, его интерьер, экстерьер, и обитателей
// типы сущностей:
// дом,
// комната,
// холодильник,
// еда, напиток,
// кошка
// жилец (человек)
class Food //1
{
public:
    int meat;
    int fish;
    int sugar;
    int salt;
    int coffee;
    int pounds;
    string recipe;
    
    
    void Consume()
    {
        cout << "Meat " << meat << "\n";
        cout << "Salt " << salt << "\n";
        cout << "Recipe  " << recipe << "\n";
    }
    void Fry()
    {
            cout << "Fish " << meat << "\n";
            cout << "Salt " << salt << " of " << pounds << "\n";
            cout << "Recipe  " << recipe << "\n";
    }
    void Eat()
    {
        cout << "Meat " << meat << "\n";
        cout << "Feash " << fish << "\n";
        cout << "Recipe  " << recipe << "\n";

    }
    void Brew()
    {
        cout << "Add  " << recipe << "\n"; 
        cout << "Coffee " << coffee << "\n";
        cout << "Sugar " << sugar << "\n";
    }
    void Mix()
    {
        cout << "Meat " << meat << "\n";
        cout << "Fish " << fish << "\n";
        cout << "Mix " << recipe << "\n";
    }
};
class Room // 2
{
    double square;
    string color; // цвет стен
    int windows;
    string floor;//type of floor(carpet, wood, tyles)
    int temp;

    void PaintFloor()
    {
        cout << "Paint floor " << square << "\n";
        cout << "Color " << color << "\n";
    }
    void Clean()
    {
        cout << "Vacuum floor " << square << "\n";
        cout << "Wash windows" << windows << "\n";
    }
    void Ventilate()
    {
        cout << "Set temperature " << temp << "\n";
    }
    void Renovate()
    {
        cout << "Fix windows " << windows << "\n";
    }
    void Flooring()
    {
        cout << "Order " << floor << "\n";
    }
};
class Person // 3
{
    string mood = "Kind";
    string skin = "white";
    string sex = "Male";
    double salary;
    double age;
    string hobby;
    void Sport()
    {
        cout << "Sport " << hobby << "\n";
    }
    void Job()
    {
        cout << "Salary " << salary << "\n";
        cout << "Age " << age << "\n";
    }
    void Fashion()
    {
        cout << "Mood " << mood << "\n";
        cout << "Hobby " << hobby << "\n";
        cout << "Sex " << sex << "\n";
    }
    void Pension()
    {

        cout << "Sex " << sex << "\n";
        cout << "Age " << age << "\n";
    }
    void Army()
    {
        cout << "Sex " << sex << "\n";
        cout << "Age " << age << "\n";
        cout << "Salary " << salary << "\n";
    }
};
class Cat // 4
{
    int age;
    string color = "Brown";
    string type = "Domestic";
    double weight;
    double length;
    void Show()
    {
        cout << "Color " << color << "\n";
    }
    void Feed()
    {
        cout << "Age " << age << "\n";
        cout << "Weight " << weight << "\n";
    }
    void SellCat()
    {
        cout << "Type of the cate " << type << "\n";
        cout << "Age of your kitten " << age << "\n";
    }
    void BuyCat()
    {
        cout << "Type of the cate " << type << "\n";
        cout << "Age of your kitten " << age << "\n";
        cout << "Color " << color << "\n";
    }
};
class Fridge
{
    string brand;
    string colordoor;
    int watts;
    int volume;
    int temparuture;
    void Freeze()
    {
        cout << "Lowest temp " << temparuture << "\n";
        cout << "Total volume " << volume << "\n";
    }
    void SellFridge()
    {
        cout << "Brand " << brand << "\n";
        cout << "Lowest power " << watts << "\n";
    }
    void BuyFridge()
    {
        cout << "Brand " << brand << "\n";
        cout << "Color " << colordoor << "\n";
        cout << "Lowest power " << watts << "\n";
    }
    void RepairFridge()
    {
        cout << "Brand " << brand << "\n";
    }

    void DecarateFridge()
    {
        cout << "Paint door in new color " << colordoor << "\n";
    }

};
class Beverage
{
    int juice;
    int soda;
    string brands_of_cola;
    string cocktail;
    int mineral;
    void MixCocktails()
    {
        cout << "Cocktails you have to mix " << soda << " and you get" << cocktail << "\n";
    }
    void BuyBeverega()
    {
        cout << "Juice  " << juice <<  "\n";
        cout << "Soda  " << soda << "\n";
        cout << "Mineral water  " << mineral << "\n";
    }
    void SellBeverega()
    {
        cout << "Juice  " << juice << "\n";
        cout << "Soda  " << soda << "\n";
        cout << "Mineral water  " << mineral << "\n";
    }
    void LoveCola()
    {
        cout << "Your cola is -  " << brands_of_cola << "\n";
    }

};
class House
{
public:
    // 1) что ты такое - какие сделать поля (аттрибуты, свойства, характеристики) - список переменных/констант, которые описывают сущность
    // какие размеры у этого типа объектов (ширина высота глубина)
    // какого оно цвета
    // какой вес и тд

    int storeys; // этажность
    double square; // площадь жилая
    bool parking; // есть ли паркинг
    bool cozy; // уютно ли там
    int balcony_count; // количество балконов
    string address;
    int count_of_rooms; // количество комнат
    Room* rooms = new Room[3]; // по умолчанию в домах по три комнаты
    Food* foods = new Food[3];
    /////////////////////////////////////////////////////////////////////
    // 2) что можно делать с помощью объектов таког типа? что умеют делаь сами объекты? что можно сделать с объектами?
    void Print() // посмотреть на дом
    {
        cout << "Этажность дома: " << storeys << "\n";
        cout << "Cколько балконов: " << balcony_count << "\n";
        cout << "Адрес дома: " << address << "\n";
    }

    void Sale() // дом можно продать
    {

    }

    void Repair() // дом можно отремонтировать
    {

    }
};
int main()
{
    setlocale(0, "");
    // создание объекта класса House - по сути, это переменная с типом House
    House AlexHouse; // квартира Александра в Черновцах
    
    AlexHouse.balcony_count = 1;
    AlexHouse.address = "проспект Победы, 45";
    AlexHouse.storeys = 5;


    AlexHouse.Print();
    Food GlibFood;

    GlibFood.meat = 7;
    GlibFood.salt = 4;
    GlibFood.recipe = "cook well 5 eggs.";
    GlibFood.Consume();
} 