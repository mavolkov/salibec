#include <iostream>
#include <vector>

using namespace std;

int main(){

int size = 10;
vector <int> arra(size, 0);

//Generation
int j = 0;
for (auto i = arra.begin(); i != arra.end(); i++, j++){
*i = rand() % 5;
cout << "arra#"<< j<<"= "<<*i<<endl;
}

//Counting
int c = 0;

for (auto i = arra.begin(); i != arra.end()-1; i++)
if (*i == 0 || *(i+1) == 0)
c++;

//Display
if (c == 0)
cout << "NO";
else
cout << c; 

return 0;
}
