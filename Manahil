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
