#include <iostream>
#include "Node.h"

using namespace std;

int main()
{
    Node node1(1,1),node2(2,2);
    cout<<pointsDistance(node1,node2)<<"\n";

    return 0;
}
