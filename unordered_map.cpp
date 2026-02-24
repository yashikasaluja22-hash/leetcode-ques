#include <iostream>
#include <unordered_map>
using namespace std;
/*unordered_map kya hota hai?
unordered_map ek key–value pair container hota hai.
📌 Real life example:

Key (Roll No)	Value (Name)
101	Yashika
102	Vanshita

Tum roll number dogi → naam turant mil jayega.
Ye hi kaam unordered_map karta hai.*/

// unordered_map<KeyType, ValueType> mapName;
int main(){
unordered_map<int, string> students;
students[101] = "Yashika";
students[122] = "Pari";
students.insert({103, "Vanshita"});

cout << '\n';

//cout << students[101];
for(auto pair : students){
    cout << pair.first << " -> " << pair.second << '\n';
}
return 0;
}