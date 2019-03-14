#include <iostream>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string str;
    cin >> str;
    cout << "sub_net = "<< str << endl;
    int n;
    cin >> n;
    cout << "user_num = "<< n << endl;

    map<string, string> myMap;

/*  //уже введенные данные
    myMap["erem"] = "192.168.0.1";
    myMap["solov"] = "192.125.24.16";
    myMap["ermol"] = "199.35.209.72";
    myMap["lebed"] = "92.168.205.90";
    myMap["blebed"] = "192.168.204.27";
    myMap["alebed"] = "192.168.206.22";
*/

    //вводим данные
    for(int i=0; i<n; i++){
        string tokill, login, ip;
        cin >> tokill;
        cin >> login;
        cin >> ip;
        //cout << "login = "<< login << ", ip = "<< ip << endl;
        myMap.emplace(login, ip);
    }

//    cout<<"\nВ map находятся:\n";
//    for(auto it = myMap.begin(); it != myMap.end(); it++){
//        cout << it->first << " - " << it->second << "\n";
//    }

    cout<<"\nВ заданной подсети находятся:\n";
    for(auto it = myMap.begin(); it != myMap.end(); it++){
        string temp((it->second).begin(), (it->second).begin() + str.length());
        if(str == temp)
            cout<< it->first << " - " << it->second << "\n";
    }

}


/*
Пример входных данных: 
192.168
6
Еремеев erem 192.168.0.1
Соловьев solov 192.125.24.16
Ермоленко ermol 199.35.209.72
Лебеденко lebed 192.168.205.90
Лебедко blebed 192.168.204.27
Кравченко alebed 192.168.206.22
Пример выходных данных для приведенного выше примера входных
данных:
erem 192.168.0.1
lebed 192.168.204.27
 */





/*
//пример пары
pair<string, string> p("hi","bye");
cout<<p.first<<" - "<<p.second<<endl; \
*/

/*
варианты добавления в map
myMap.insert(make_pair("1","bye1"));
myMap.insert(pair<string, string>("2","bye2"));
myMap.emplace("3","bye3");
auto it = myMap.find("3");
cout << it->first << endl;
cout << it->second << endl;
*/


//пример сортировки по ключу/значению с инета
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//#include <utility>
//using namespace std;
//
//bool pred(const pair< string, string > &a, const pair< string, string > &b)
//{
//    return a.first < b.first;
//}
//
//int main()
//{
//    std::map< string, string > map;
//    map["cvd"] = "b";
//    map["avd"] = "c";
//    map["bvs"] = "a";
//
//
//    vector< pair< string, string > > vec(map.begin(), map.end() );  //создаем вектор из map'a
//    sort(vec.begin(), vec.end(), pred);                             //сортируем этот вектор по значению
//
//    //вывод
//    for (auto p : vec) //цикл в стиле c++11
//        cout << p.first << ' - ' << p.second << endl;
//}
