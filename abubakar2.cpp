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