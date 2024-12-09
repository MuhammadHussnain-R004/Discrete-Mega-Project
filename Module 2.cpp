#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
const int SIZE = 40;
struct Friends{
    string student1,student2;
};
void readData(string mainstudent[], string friendlist[][5]) {
    ifstream friendsfile("C:\\Users\\Husnain\\3D Objects\\discrete\\discrete.csv"); //filepath
    string line;
    int i = 0;
    while (i < SIZE && getline(friendsfile, line)) {
        stringstream ss(line);
        getline(ss, mainstudent[i], ',');
        int j = 0;
        while (getline(ss, friendlist[i][j], ',') && j < 5) {
            j++;
        }
        i++;
    }
    friendsfile.close();
}
int main() {
    string mainstudent[SIZE];
    string friendlist[SIZE][5];
    Friends allFriendships[SIZE * 5];
    int totalFriendships = 0;
    readData(mainstudent, friendlist);
    for (int i = 0; i < SIZE; i++) {
        if (mainstudent[i] == "") break;
        for (int j = 0; j < 5; j++) {
            if (friendlist[i][j] == "") break;
            allFriendships[totalFriendships].student1 = mainstudent[i];
            allFriendships[totalFriendships].student2 = friendlist[i][j];
            totalFriendships++;
        }
    }
    cout << "ASYMMETRIC PAIRS" << endl;
    for (int i = 0; i < totalFriendships; i++) {
        bool isSymmetric = false;
        for (int j = 0; j < totalFriendships; j++) {
            if (allFriendships[i].student1 == allFriendships[j].student2 &&
                allFriendships[i].student2 == allFriendships[j].student1) {
                isSymmetric = true;
                break;
            }
        }
        if (isSymmetric==false) {
            cout<< allFriendships[i].student1<< " & " << allFriendships[i].student2<< endl;
        }
    }
    return 0;
}
