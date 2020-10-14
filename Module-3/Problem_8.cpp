#include <iostream>
using namespace std;

int main()
{

    // n is the number of events
    // events array holds 6 events
    // First value of each element denotes the starting time
    // Second value of each element denotes the ending time

    // Greedy algorithm will use earliest ending time as the greedy choice
    // This greedy choice was preferred in the Handouts > Lecture 14 > Greedy Scheduling


    int n = 6;
    int events[n][2] = { {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}, {5, 9} };

    int tmin;
    int selected_event;
    int previous_event_ending = -1;

    bool event_selected;
    int event_count = 1;
    while(1)
    {
        event_selected = false;
        tmin = 100;
        for(int i = 0; i < n; i++)
        {
            if(events[i][1] < tmin && events[i][0] >= previous_event_ending)
            {
                event_selected = true;
                tmin = events[i][1];
                selected_event = i;
            }
        }

        previous_event_ending = events[selected_event][1];

        if(event_selected)
        {
            cout <<"Event " << event_count << " | Starting: " <<  events[selected_event][0] << " Ending: " << events[selected_event][1]  << endl;
            event_count++;
        }

        else
        {
            break;
        }
    }

    return 0;
}
