void preloadEvents() {
    events[0][0] = "1"; events[0][1] = "Tech Conference"; events[0][2] = "18/12/2024"; events[0][3] = "10:00 AM";
    events[0][4] = "FCSE GIKI"; events[0][5] = "500"; events[0][6] = "3000";
    events[1][0] = "2"; events[1][1] = "Art Festival"; events[1][2] = "20/12/2024"; events[1][3] = "2:00 PM";
    events[1][4] = "Gikafe"; events[1][5] = "300"; events[1][6] = "2500";
    events[2][0] = "3"; events[2][1] = "PSIFI"; events[2][2] = "29/12/2024"; events[2][3] = "8:00 PM";
    events[2][4] = "LUMS"; events[2][5] = "3000"; events[2][6] = "8000";
    events[3][0] = "4"; events[3][1] = "New Year Fest"; events[3][2] = "31/12/2024"; events[3][3] = "6:00 PM";
    events[3][4] = "Cafe Lawn"; events[3][5] = "600"; events[3][6] = "1500";
    }

int main() {
    preloadEvents();
    Menu();
    system("pause");
    return 0;
}
