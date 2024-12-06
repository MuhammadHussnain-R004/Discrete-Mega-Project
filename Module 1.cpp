#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void readData(string st[], string f[][5], const string& filePath, int &SIZE)
{
    ifstream in("C:\\Users\\Husnain\\3D Objects\\discrete\\discrete.csv");
    string line;
    int i = 0;

    while (i < SIZE && getline(in, line))
    {
        stringstream ss(line);
        getline(ss, st[i], ',');
        int j = 0;
        do
        {
            if (!getline(ss, f[i][j], ','))
                break;
            j++;
        } while (j < 5);
        i++;
    }
    in.close();
}

void countFriends(const string st[], const string f[][5], int friendcout[], int &SIZE)
{
    for (int i = 0; i < SIZE;  i++) //colums
    {
       for (int j = 0; j < SIZE; j++) //for checking all students
        {
          for(int k = 0; k<5; k++) // for friends
            {
                if (f[j][k] == st[i])
                {
                    friendcout[i]++;
                }
            }
        }
    }
}

int findMostPopular(const string st[], const int friendcout[],int &SIZE, int &maxFriends)
{
    int maxIndex = 0;
    int i = 0;
    do
    {
        if (friendcout[i] > maxFriends)
        {
            maxFriends = friendcout[i];
            maxIndex = i;
        }
        i++;
    } while (i < SIZE);

    return maxIndex;
}

void printMostPopular(const string st[], int friendcout[], int &SIZE, int &maxFriends)
{
    int maxIndex = findMostPopular(st, friendcout, SIZE, maxFriends);
    cout << st[maxIndex] << " is the most popular student with " << friendcout[maxIndex] << " friends." << endl;
}
int main()
{
     int SIZE = 41;
    string st[SIZE];
    string f[SIZE][5];
     int maxFriends = 0;
    int friendcout[SIZE] = {0};
    string filePath;
    readData(st, f, filePath, SIZE);
    countFriends(st, f, friendcout, SIZE);
    cout<<"MOST POPULAR STUDENT IN CLASS "<<endl;
    printMostPopular(st, friendcout, SIZE, maxFriends);
    return 0;
}
