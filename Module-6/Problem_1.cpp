#include <iostream>
#include <cmath>
using namespace std;

void tower_of_hanoi(int n, int from_peg, int to_peg)
{
    if(n == 1)
    {
        cout << "Move disk from peg " << from_peg << " to " << to_peg << endl;
        return;
    }

    int unused_peg = 6 - from_peg - to_peg;

    tower_of_hanoi(n - 1, from_peg, unused_peg);
    cout << "Move disk from peg " << from_peg << " to " << unused_peg << endl;

    tower_of_hanoi(n - 1, unused_peg, to_peg);
    cout << "Move disk from peg " << unused_peg << " to " << to_peg << endl;
    tower_of_hanoi(n - 1, unused_peg, to_peg);

    return;
}

int main()
{
    // number of pegs
    int n = 3;
    cout << "Number of disks: " << n << endl;

    tower_of_hanoi(3, 1, 3);

    return 0;
}
