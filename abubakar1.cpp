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