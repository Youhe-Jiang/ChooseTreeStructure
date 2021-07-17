#include <iostream>
using namespace std;

void printTreeStructure(vector<vector<int>> tree)
{
    for (int i = 0; i < tree.size(); i++) {
        for (int j = 0; j < tree[i].size(); j++) {
            if(j == tree[i].size()-1)
            {
                cout << tree[i][j];
            }
            else
            {
                cout << tree[i][j] << "*";
            }
        }
        cout << endl;
    }
}

void printTreeStructure_right(vector<vector<int>> tree)
{
    for (int i = 0; i < tree.size(); i++) {
        for (int j = 0; j < tree[i].size(); j++) {
            if(j == tree[i].size()-1)
            {
                cout << tree[i][j];
            }
            else
            {
                cout << tree[i][j] << "*";
            }
        }
        cout << "-1" << endl;
    }
}

void printTreeStructure_left(vector<vector<int>> tree)
{
    for (int i = 0; i < tree.size(); i++) {
        for (int j = 0; j < tree[i].size(); j++) {
            if(j == tree[i].size()-1)
            {
                cout << tree[i][j];
            }
            else
            {
                cout << tree[i][j] << "*";
            }
        }
        cout << "+1" << endl;
    }
}