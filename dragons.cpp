#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;


vector<int> tokenize(string s, string del = " ") // split function using space as a delimiter
{
    vector<int> coins;
    int num;

    int start = 0;
    int end = s.find(del);
    while (end != -1)
    {
        string temp = s.substr(start, end - start);
        stringstream ss;
        ss << temp;
        ss >> num;
        coins.push_back(num);

        start = end + del.size();
        end = s.find(del, start);
    }

    string last = s.substr(start, end - start);
    stringstream ss;
    ss << last;
    ss >> num;
    coins.push_back(num);
    coins.erase(coins.begin());

    sort(coins.begin(), coins.end());

    return coins;
}

int findMin(vector<int> knights, int dragon) // finding the smallest knight thats big enough to kill a specific dragon
{
    int smallest = knights.size() -1;

    for (int i = 0; i < knights.size(); i++)
    {
        if (knights[i] <= knights[smallest] && knights[i] >= dragon)
        {
            smallest = i;
        } 
    }

    return smallest;
}

int minHeights(vector<int> dragons, vector<int> knights)
{
    int cost = 0;

    for (int value : dragons)
    {
        int index = findMin(knights, value);
        cost += knights[index];
        knights.erase(knights.begin()+(index));            
    }

    return cost;
}


int main()
{
    string dragons, knights;
    vector<int> dragon_vec, knight_vec;
    
    getline(cin,dragons);
    getline(cin,knights);

    dragon_vec = tokenize(dragons);
    knight_vec = tokenize(knights);


    int solution = minHeights(dragon_vec, knight_vec);
    cout << solution << endl;


    return 0;
}
