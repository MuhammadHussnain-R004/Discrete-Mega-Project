#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void readdata(string st[], string f[][5], int SIZE)
 {
    ifstream file("Data.csv");
    string line;
    int i = 0;
    while (i < SIZE && getline(file, line)) 
    {
        stringstream ss(line);
        getline(ss, st[i], ','); 
        int j = 0;
        while (j < 5 && getline(ss, f[i][j], ','))
         {
            j++; 
        }
        i++;
    }
    file.close();
}
int findFriends( string student,  string st[],  string f[][5], int SIZE, string friends[]) 
{
    for (int i = 0; i < SIZE; i++) 
    {
        if (st[i] == student)
         {
            int count = 0;
            for (int j = 0; j < 5; j++) 
            {
                if (!f[i][j].empty()) 
                {
                    friends[count++] = f[i][j]; 
                }
            }
            return count;
        }
    }
}
int CCFriends( string friends1[],  string friends2[], int size1, int size2) {
    int count = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (friends1[i] == friends2[j]) {
                count++; 
            }
        }
    }
    return count;
}
int main() {
    const int SIZE = 40;
    string st[SIZE];
    string f[SIZE][5];
    readdata(st, f, SIZE);
    string student1, student2;
    cout << "Enter the name of the first student: ";
    getline(cin, student1);
    cout << "Enter the name of the second student: ";
    getline(cin, student2);
    string friends1[5], friends2[5];
    int size1 = findFriends(student1, st, f, SIZE, friends1);
    int size2 = findFriends(student2, st, f, SIZE, friends2);
    int CF = CCFriends(friends1, friends2, size1, size2);
    cout << "Common Friends of " << student1 << " and " << student2 << " are: " << CF << endl;
    return 0;
}
