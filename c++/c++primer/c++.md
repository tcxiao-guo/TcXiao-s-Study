# 第一章  预备知识
c++在c语言的基础上增加了 `面向对象`和`泛型`  

# 第二章  开始学习C++
```c++
//2.1
#include <iostream>

int main()
{
    using namespace std;

    cout << "Name:" << "Guo Xiao" << endl;
    cout << "Address: " << "China" << endl;

    return 0; 
}
```
```c++
//2.2
#include <iostream>

int main()
{
    using namespace std;

    int llong;
    const int Convert = 220;
    cout << "Please input the distance(long): ";
    cin >> llong;
    cout << "It is " << llong * Convert << " ma" << endl;

    return 0;
}
```
```c++
//2.3
#include <iostream>
using namespace std;

void blind();
void see();
int main()
{
    blind();
    see();
    return 0;
}

void blind()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Three blind mice" << endl;
    }
}

void see()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "See how they run" << endl;
    }
}
```
```c++
//2.4
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age :";
    cin >> age;
    cout << "It is " << age * 12 << " months" << endl;
    return 0;
}
```
```c++
//2.5
#include <iostream>
using namespace std;

int main()
{
    int celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << 1.8 * celsius + 32.0 << " degrees Fahrenheit" << endl;
    return 0;
}
```
```c++
//2.6
#include <iostream>
using namespace std;

int main()
{
    float lightYears;
    cout << "Enter the number of light years: ";
    cin >> lightYears;
    cout << lightYears << " light years = " << 63240 * lightYears << " astronomical units." << endl;
    return 0;
}
```
```c++
//2.7
#include <iostream>
using namespace std;

void time(int, int);
int main()
{
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    time(hours, minutes);
    return 0;
}

void time(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}
```
# 第三章 处理数据
```c++
//3.1
#include <iostream>
using namespace std;

int main()
{
    int height;
    const int convert = 12;
    cout << "Please enter your height:____\b\b\b\b ";
    cin >> height;
    cout << "you are " << height / convert << " feet and " << height % convert << " inches";
    return 0;
}
```
```c++
//3.2
#include <iostream>
using namespace std;

int main()
{
    int feet, inches, pounds;
    cout << "Please enter your height, feet: ";
    cin >> feet;
    cout << "inches: ";
    cin >> inches;
    cout << "Please enter your weight: ";
    cin >> pounds;
    double height = (inches + feet * 12) * 0.0254;
    double weight = pounds / 2.2;
    cout << "BMI: " << weight / height;

    return 0;
}
```
```c++
//3.3
#include <iostream>
using namespace std;

int main()
{
    int degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    double res = degrees + minutes / 60.0 + seconds / 60.0 / 60.0;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << res << " degrees";

    return 0;
}
```
```c++
//3.4
#include <iostream>
using namespace std;

int main()
{
    int seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    int days, hours, minutes;
    int s = seconds % 60;
    minutes = seconds / 60 % 60;
    hours = seconds / 60 / 60 % 24;
    days = seconds / 60 / 60 / 24;
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << s << " seconds";
    return 0;
}
```
```c++
//3.5
#include <iostream>
using namespace std;

int main()
{
    long long worldPopulation, usaPopulation;
    cout << "Enter the world's population: ";
    cin >> worldPopulation;
    cout << "Enter the population of the US: ";
    cin >> usaPopulation;
    cout << "The population of the US is " << usaPopulation * 100.0 / worldPopulation << "\% of the world population.";
    return 0;
}
```
```c++
#include <iostream>
using namespace std;

int main()
{
    double miles, gallons;
    cout << "Please enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    cout << "It is " << gallons / miles << " gallons/miles";
    return 0;
}
```

#第四章 复合类型
```c++
//4.1
#include <iostream>
using namespace std;

int main()
{
    char firstName[20];
    char lastName[20];

    cout << "What is your first name? ";
    cin.getline(firstName, 20);
    cout << "What is your last name? ";
    cin.get(lastName, 20).get();

    char grade;
    int age;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age;
    return 0;
}
```
```c++
//4.2
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, dessert;
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
```
```c++
//4.3
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int N = 20;
    char firstName[N];
    char lastName[N];

    cout << "Enter your first name: ";
    cin.getline(firstName, N);
    cout << "Entet your last name: ";
    cin.getline(lastName, N);

    char s[2 * N];
    strcat_s(s, lastName);
    strcat_s(s, ",");
    strcat_s(s, firstName);

    cout << "Here's the information in a single string: " << s << endl;
    return 0;
}
```
```c++
//4.4
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName, lastName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Entet your last name: ";
    getline(cin, lastName);

    string res;
    res = lastName + ", " + firstName;

    cout << "Here's the information in a single string: " << res << endl;
    return 0;
}
```
```c++
//4.5
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string logo;
    double weight;
    int calorie;
};
int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "Logo: " << snack.logo << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;
    return 0;
}
```
```c++
//4.6
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string logo;
    double weight;
    int calorie;
};
int main()
{
    CandyBar cb[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Guo Xiao", 1.4, 200},
        {"Duo xiao", 1.2, 500},

    };
    for (int i = 0; i < 3; i++)
    {
        cout << "Logo: " << cb[i].logo << endl;
        cout << "Weight: " << cb[i].weight << endl;
        cout << "Calorie: " << cb[i].calorie << endl;
    }

    return 0;
}
```
```c++
//4.7
#include <iostream>
#include <string>
using namespace std;

struct Piza
{
    string name;
    double diameter;
    double weight;
};
int main()
{
    Piza *p = new Piza();
    cout << "Please enter the piza's company name: ";
    getline(cin, p->name);
    cout << "Enter the piza's diameter: ";
    cin >> p->diameter;
    cout << "Enter the piza's weight: ";
    cin >> p->weight;
    cout << "Name: " << p->name << endl;
    cout << "Diameter: " << p->diameter << endl;
    cout << "Weight: " << p->weight << endl;

    return 0;
}
```

# 第五章 循环和关系表达式
