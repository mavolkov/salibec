#include <iostream>
#include <iostream>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string>
using namespace std;

/*
Дан массив слов. Преобразовать массив слов, заменив во всех словах все группы
символов “ab” на символы “ссс”. Получить подстроку, взяв от каждого слова массива
длиной более 1 символа по две конечных буквы. Сформировать предложение из тех слов
массива, которые не содержат в своем составе символов из полученной подстроки.
*/

int main() {
    setlocale(LC_ALL, "rus");

    //vector<string> lines;
    //string line;

    cout<<"\n";
    cout<<"Строка до:";
    string s1 = "Hello abrams abbyy kiabk by about abroad it";
    cout<<"\n"<<s1<<"\n\n";

    cout<<"Заменяем ab на ссс: ";
    while(s1.find("ab") < s1.size())
        s1 = s1.substr(0,s1.find("ab")) + "ccc" + s1.substr(s1.find("ab")+2,s1.size());
    cout<<"\n"<<s1<<"\n\n";

    cout<<"По 2 конечные буквы:\n";

    return 0;
}





//string s = "hello";
//string s1, s2, s3, s4;
//s1 = s.substr(0, 3), // "hel"
//s2 = s.substr(1, 3), // "ell"
//s3 = s.substr(0, s.length()-1), "hell"
//s4 = s.substr(1); // "ello"
