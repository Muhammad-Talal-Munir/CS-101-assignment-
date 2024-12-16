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
void viewevents()
{
    cout<<endl<<"The upcoming events are"<<endl;
    for (int i = 0; i < current_events; i++)
    {
        cout<<"Event Number : "<<events[i][0]<<endl;
        cout<<"Event Name : "<<events[i][1]<<endl;
        cout<<"Event Date : "<<events[i][2]<<endl;
        cout<<"Event Time : "<<events[i][3]<<endl;
        cout<<"Event Location : "<<events[i][4]<<endl;
        cout<<"Event Social Night Ticket Price : "<<events[i][5]<<endl;
        cout<<"Event Registration Fee : "<<events[i][6]<<endl;
        cout<<endl<<endl;
    }
}
void buy_tickets(){
viewevents();
    if (current_events == 0) {
        cout << "No events available to buy tickets." << endl;
        return;
    }
    int eventID;
    cout << "Enter the Event ID to buy tickets for: ";
    cin >> eventID;
    if (eventID < 1 || eventID > current_events) {
        cout << "Invalid Event ID." << endl;
        return;
    }
    string purchaserName;
    int purchaserAge;
    cout <<"Enter your name: ";
    cin>>purchaserName;    
    cout <<"Enter your age: ";
    cin >> purchaserAge;
    float ticketCount;
    cout <<"Enter the number of tickets to buy (max 5): "<<endl<<"you will be releived of the tax if you buy 5 tickets"<<endl;
    cin >> ticketCount;
    if (ticketCount < 1 || ticketCount > 5) {
        cout <<"Invalid number of tickets. You can only buy between 1 and 5 tickets."<< endl;
        return;
    }
    float ticketPrice = stof(events[eventID - 1][5]);
    float totalCost = ticketPrice * ticketCount;
    float taxpercent = 0.16f;
    float tax = totalCost * taxpercent;
    if (ticketCount == 5)
    {
        tax = 0;
    }
    float netTotal = totalCost + tax;

    cout <<endl<<"Purchase Summary" << endl;
    cout << "Purchaser Name: " << purchaserName << endl;
    cout << "Purchaser Age: " << purchaserAge << endl;
    cout << "Event number: " << events[eventID - 1][0] << endl;
    cout << "Number of Tickets: " << ticketCount << endl;
    cout << "Total Cost: $" << totalCost << endl;
    cout << "Tax (16%): $" << tax << endl;
    cout << "Net Total: $" << netTotal << endl;
    cout << "Tickets purchased successfully!" << endl;
}
void Register_for_events(){
viewevents();
    if (current_events == 0) {
        cout << "No events available to register for" << endl;
        return;
    }
    int eventID;
    cout << "Enter the Event ID to register for: ";
    cin >> eventID;
    if (eventID < 1 || eventID > current_events) {
        cout << "Invalid Event ID." << endl;
        return;
    }
    string DelegateName;
    int DelegateAge;
    cout <<"Enter your name: ";
    cin>>DelegateName;    
    cout <<"Enter your age: ";
    cin >> DelegateAge;
    
    int regPrice = stoi(events[eventID - 1][6]);

    cout <<endl<<"Purchase Summary" << endl;
    cout << "Delegate Name: " << DelegateName << endl;
    cout << "Delegate Age: " << DelegateAge << endl;
    cout << "Event number: " << events[eventID - 1][0] << endl;
    cout << "Event registered successfully!" << endl;
    cout << "net total: "<<regPrice<< endl;

}
void Menu(){
while (true)
{
    cout<<endl<<" Welcome To The Event Management System "<<endl;
    cout<<endl<<"Enter The corresponding digit to choose your action "<<endl;
    cout<<"Create Event : 1"<<endl;
    cout<<"Register For An Event : 2"<<endl;
    cout<<"Buy Event Social Night Ticket : 3"<<endl;
    cout<<"View Events : 4"<<endl;
    cout<<"Exit : 5"<<endl;
int choice;
cin>>choice;
switch (choice)
{
case 1:
    create_event();
    break;
case 2:
    Register_for_events();
    break;
case 3:
    buy_tickets();
    break;
case 4:
    viewevents();
    break;
case 5:
    cout<<"Exiting function"<<endl<<"goodbye!"<<endl;
    return; 
default:
    cout<<"invalid choice"<<endl;
}
}
}
void preloadEvents() {
    events[0][0] = "1"; events[0][1] = "Tech Conference"; events[0][2] = "18/12/2024"; events[0][3] = "10:00 AM";events[0][4] = "FCSE GIKI"; events[0][5] = "500"; events[0][6] = "3000";
    events[1][0] = "2"; events[1][1] = "Art Festival"; events[1][2] = "20/12/2024"; events[1][3] = "2:00 PM";events[1][4] = "Gikafe"; events[1][5] = "300"; events[1][6] = "2500";
    events[2][0] = "3"; events[2][1] = "PSIFI"; events[2][2] = "29/12/2024"; events[2][3] = "8:00 PM";events[2][4] = "LUMS"; events[2][5] = "3000"; events[2][6] = "8000";
    events[3][0] = "4"; events[3][1] = "New Year Fest"; events[3][2] = "31/12/2024"; events[3][3] = "6:00 PM";events[3][4] = "Cafe Lawn"; events[3][5] = "600"; events[3][6] = "1500";
    }

int main() {
    preloadEvents();
    Menu();
    system("pause");
    return 0;
}