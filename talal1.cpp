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