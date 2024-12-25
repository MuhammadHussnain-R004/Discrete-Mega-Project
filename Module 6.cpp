#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void readdata(string st[], string f[][5], int SIZE)
 {
    ifstream file("C:\\Users\\Husnain\\3D Objects\\discrete\\discrete.csv");
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
int findFriends(const string& student, const string st[], const string f[][5], int SIZE, string friends[])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (st[i] == student)
         {
            int count = 0;
            for (int j = 0; j < 5; j++) {
                if (!f[i][j].empty()) {
                    friends[count++] = f[i][j];
                }
            }
            return count;
        }
    }
}
int countCommonFriends(const string friends1[], const string friends2[], int size1, int size2) {
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
int potential(int CF,int threshold,string student1,string student2){               ///Only this function is new to previous module 5 for finding potential friendship
    bool ispotential;
    if(CF>threshold){
        ispotential==true;
        cout<<student1<<" and "<<student2<<" may be potential friends.";
    }
    else
        ispotential==false;
        cout<<student1<<" & "<<student2<<" may not be potential friends.";
}
int main() {
    const int SIZE = 40;
    string st[SIZE];
    string f[SIZE][5];
    readdata(st, f, SIZE);
    string student1, student2;
    int threshold;

    cout << "Enter the name of the first student: ";
    getline(cin, student1);
    cout << "Enter the name of the second student: ";
    getline(cin, student2);

    cout<<"Enter minimum Threshold Criteria:";
    cin>>threshold;

    string friends1[5], friends2[5];
    int size1 = findFriends(student1, st, f, SIZE, friends1);
    int size2 = findFriends(student2, st, f, SIZE, friends2);

    int CF = countCommonFriends(friends1, friends2, size1, size2);
    cout<<student1<<" and "<<student2<<" have "<<CF<<" common Friends."<<endl;

    potential(CF,threshold,student1,student2);

    return 0;
}
