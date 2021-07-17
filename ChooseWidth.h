#include <iostream>
using namespace std;
#include <vector>
#include "PrintTreeStructure.h"
#include "GetWidth.h"
#include "IsPrimeNumber.h"

class chooseWidth
{
public:
    chooseWidth(int node)
    {
        m_Node = node;
        m_Node_right = m_Node + 1;
        m_Node_left = m_Node - 1;
        if(isPrimeNumber(m_Node) == 1)
        {
            vector<vector<int>> tree_right = getWidth(m_Node_right);
            vector<vector<int>> tree_left = getWidth(m_Node_left);
            printTreeStructure_right(tree_right);
            printTreeStructure_left(tree_left);
        }
        else
        {
            vector<vector<int>> tree = getWidth(m_Node);
            vector<vector<int>> tree_right = getWidth(m_Node_right);
            vector<vector<int>> tree_left = getWidth(m_Node_left);
            printTreeStructure(tree);
            printTreeStructure_right(tree_right);
            printTreeStructure_left(tree_left);
        }

    }
private:
    int m_Node;
    int m_Node_right;
    int m_Node_left;
};