#include <iostream>
#include <string>
using namespace std;

const int fields =7;
const int max_events = 100;
string events[max_events][fields];
int current_events = 4 ;

void create_event()
{
    if (current_events >= max_events)
    {
        cout<<"no more space available for addition of new events"<<endl;
        return ;
    }
    else
    {
        cout<<endl<<"creating a new event ... "<<endl<<endl;
        events[current_events][0]=to_string(current_events+1);
        cout<<"event number for the event is : "<<current_events+1<<endl;
        cout<<"enter the name of the new event"<<endl;
        cin>>events[current_events][1];
        cout<<"enter the date of the new event"<<endl;
        cin>>events[current_events][2];
        cout<<"enter the time of the new event"<<endl;
        cin>>events[current_events][3];
        cout<<"enter the Location of the new event"<<endl;
        cin>>events[current_events][4];
        cout<<"enter the social night ticket price of the new event"<<endl;
        cin>>events[current_events][5];
        cout<<"enter the Registration fee of the new event"<<endl;
        cin>>events[current_events][6];

        current_events++;
        cout<<"event created successfully"<<endl<<endl;
    }
}
