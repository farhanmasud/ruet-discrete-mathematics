#include <iostream>
using namespace std;

char tf_from_01(int a)
{
    char tf;

    if(a == 0)
    {
        tf = 'F';
    }

    else if(a == 1)
    {
        tf = 'T';
    }

    return tf;
}

int p_implies_q(int p, int q)
{
    // function for calculating conditional

    int p_imp_q;
    if(p == 0)
    {
        p_imp_q = 1;
    }

    else
    {
        if(q == 1)
        {
            p_imp_q = 1;
        }
        else
        {
            p_imp_q = 0;
        }
    }

    return p_imp_q;
}

int main()
{
    // HEADERS
    cout << "P\tQ\tConjunction\tDisjunction\tExclusive OR\tConditional\tBi-Conditional\n";
    cout << "--\t--\t----------\t----------\t----------\t----------\t----------\n";


    int pq_and, pq_or, pq_xor, pq_conditional, pq_biconditional;

    for(int p = 0; p <= 1; p++)
    {
        // First Loop: Generating values of P
        for(int q = 0; q <= 1; q++)
        {
            // Second Loop: Generating values of Q

            pq_and = p && q;
            pq_or = p || q;
            pq_xor = pq_or && (!pq_and);
            pq_biconditional= !pq_xor;
            pq_conditional = p_implies_q(p, q);



            cout << tf_from_01(p) << "\t";
            cout << tf_from_01(q) << "\t";
            cout << tf_from_01(pq_and) << "\t\t";
            cout << tf_from_01(pq_or) << "\t\t";
            cout << tf_from_01(pq_xor) << "\t\t";
            cout << tf_from_01(pq_conditional) << "\t\t";
            cout << tf_from_01(pq_biconditional) << "\n";
        }
    }


    return 0;
}
