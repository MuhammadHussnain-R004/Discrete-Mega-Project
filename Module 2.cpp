#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
struct Friends
{
    string student1,student2;
};
void readData(int SIZE, string mainstudent[], string friendlist[][5]) {
    ifstream file("data.csv");
    string line;
    for (int i = 0; i < SIZE && getline(file, line); i++) {
        stringstream ss(line);
        getline(ss, mainstudent[i], ',');
        for (int j = 0; j < 5 && getline(ss, friendlist[i][j], ','); j++)
        {

        }
    }
    file.close();
}
int main()
 {
    int SIZE = 40;
    string mainstudent[SIZE];
    string friendlist[SIZE][5];
    Friends allFriendships[SIZE * 5];
    int totalFriendships = 0;
    readData(SIZE ,mainstudent, friendlist);
    for (int i = 0; i < SIZE; i++)
        {
        for (int j = 0; j < 5; j++) {
            if (friendlist[i][j] == "") break;
            allFriendships[totalFriendships].student1 = mainstudent[i];
            allFriendships[totalFriendships].student2 = friendlist[i][j];
            totalFriendships++;
        }
    }
    cout << "ASYMMETRIC PAIRS" << endl;
    int countstudents;
    for (int i = 0; i < totalFriendships; i++) {
        bool Symmetric = false;
        for (int j = 0; j < totalFriendships; j++) {
            if (allFriendships[i].student1 == allFriendships[j].student2 &&
                allFriendships[i].student2 == allFriendships[j].student1) {
                Symmetric = true;
                break;
            }
        }
<<<<<<< HEAD
        if (Symmetric==false) {
            cout<< allFriendships[i].student1<< " and " << allFriendships[i].student2<< endl;
=======
        if (isSymmetric==false) {
            cout<< allFriendships[i].student1<< " & " << allFriendships[i].student2<< endl;
            countstudents++;
>>>>>>> 320b4d4a6349c06df3149b1ab7fc1f088a080a5d
        }
    } cout<<countstudents<<" Students have Asymmetriic Pairs in Class.";
    return 0;
}