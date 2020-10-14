#include <iostream>
using namespace std;

void assign_to_memory_location(long value, int value_index, int m, int memory[])
{
    int mem_loc = value % m;
    if(memory[mem_loc] != -1)
    {
        // Collision resolution
        // Linear probing

        for(int i = 1; i < m; i++)
        {
            if(memory[mem_loc + i] == -1)
            {
                mem_loc = mem_loc + i;
                break;
            }
        }
    }

    cout << "Memory value: " << value << endl;
    cout << value << " % " << m << " = " << value % m << endl;
    cout << "Memory Location: " << mem_loc << endl;

    memory[mem_loc] = value_index;
    return ;
}


int main()
{
    int m = 111;
    int memory[m] = {};

    for(int i = 0; i < m; i++)
    {
        memory[i] = -1;
    }

    long memory_values[] = {2974, 64212848, 37149212, 107405723, 5860};
    int values_size = sizeof(memory_values) / sizeof(memory_values[0]);

    for(int i = 0; i < values_size; i++)
    {
        assign_to_memory_location(memory_values[i], i, m, memory);
    }

    return 0;
}
