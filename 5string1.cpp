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

//----------------------------------------------------------------------------------------

    cout<<"\n";
    cout<<"Строка до:";
    string s1 = "Hello abrams abbyy kiabk by about z abroad w i it amb above";
    cout<<"\n"<<s1<<"\n";

    cout<<"1) Заменяем ab на ссс: ";
    while(s1.find("ab") < s1.size())
        s1 = s1.substr(0,s1.find("ab")) + "ccc" + s1.substr(s1.find("ab")+2,s1.size());
    cout<<"\n"<<s1<<"\n\n";

//----------------------------------------------------------------------------------------

    cout<<"2) По 2 конечные буквы:\n";
    string s2 = "";
    for (int i=0; i<s1.size(); i++){
        if (s1.substr(i,1)==" ") { //если пробел
            string temp = s1.substr(i - 2, 2);
            if (temp.find(" ") != 0) { //если нет пробела(длина > 1 символа)
                cout << temp << " ";
                s2 += temp;
            }
        }
    }
    cout<<"\n";
    cout<<"Подстрока из них:\n";
    cout<< s2 << "\n";

//----------------------------------------------------------------------------------------

    cout<<"\n3) Предложение из тех слов массива, которые не содержат в своем составе символов из подстроки.\n";
    string s3 = "";
    for (int i=1; i<s1.size()-1; i++){
        //cout<< s1[i-1] << " - " << s1[i+1] << "\n";
        if (s1[i-1] == *" " && s1[i+1] == *" "){
            //cout<<s1[i]<<"\n";
            s3 = s3 + s1[i] + " ";
        }
    }
    cout<< s3 << "\n";



    return 0;
}





//string s = "hello";
//string s1, s2, s3, s4;
//s1 = s.substr(0, 3), // "hel"
//s2 = s.substr(1, 3), // "ell"
//s3 = s.substr(0, s.length()-1), "hell"
//s4 = s.substr(1); // "ello"
