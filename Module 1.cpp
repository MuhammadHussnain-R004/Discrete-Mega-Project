#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void readdata(string st[], string f[][5],int SIZE)
{
    ifstream file("dataa.csv");
    string line;
    int i = 0;
    while (i < SIZE && getline(file, line))
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
    file.close();
}

void countfriends(string st[], string f[][5], int friendcout[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        {
            for(int j=0; j<SIZE; j++)
          {
        for (int j = 0; j < 5; j++)
         {
            if (!f[i][j].empty())
                {
                friendcout++;
            }
        }
          }
    }
}

void popular(string st[], int friendcout[], int SIZE)
{
    int maxindex = 0;
    int maxfriends = friendcout[0];
    for (int i = 1; i < SIZE; i++)
        {
        if (friendcout[i] > maxfriends)
        {
            maxfriends = friendcout[i];
            maxindex = i;
        }
    }
    cout << st[maxindex] << " is the most popular student with " << friendcout[maxindex] << " friends." << endl;
}

int main()
{
     int SIZE = 41;
    string st[SIZE];
    string f[SIZE][5];
     int maxFriends = 0;
    int friendcout[SIZE] = {0};
    readdata(st, f, SIZE);
    countfriends(st, f, friendcout, SIZE);
    cout<<"MOST POPULAR STUDENT IN CLASS "<<endl;
     popular(st, friendcout, SIZE);
    return 0;
}
