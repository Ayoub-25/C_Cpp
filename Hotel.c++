#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
    cout<<"\n\t\t******************* Hotel Management System *******************\n";
    cout<<"\t\t_______________________________________________________________\n";
    cout << "\n\t\t Quantity of items we have ";
    cout << "\n\n\n Rooms availble : ";
    cin >> Qrooms;
    cout << "\n Quantity of Pasta : ";
    cin >> Qpasta;
    cout << "\n Quantity of Burger : ";
    cin >> Qburger;
    cout << "\n Quantity of Noodles : ";
    cin >> Qnoodles;
    cout << "\n Quantity of Shake : ";
    cin >> Qshake;
    cout << "\n Quantity of Chiken-Roll : ";
    cin >> Qchicken;

m:
    cout << "\n\t\t\t Please select from the menu option ";
    cout << "\n\n 1) Rooms";
    cout << "\n 2) Pasta";
    cout << "\n 3) Burger";
    cout << "\n 4) Noodles";
    cout << "\n 5) Shake";
    cout << "\n 6) Chicken";
    cout << "\n 7) Information regarding sales and collection ";
    cout << "\n 8) Exit ";

    cout << "\n\n Please Enter your choise : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of the rooms you want : ";
        cin >> quant;

        if (Qrooms - Srooms >= quant)
        {
            Srooms += quant;
            Total_rooms += quant * 1200;
            cout << "\n\n\t\t" << quant << " Room/Rooms have been alloted to you!";
        }
        else
        {
            cout << "\n\t Only" << Qrooms - Srooms << " Rooms remaining in hotel ";
        }
        break;
    case 2:
        cout << "\n\n Enter Pasta Quantity : ";
        cin >> quant;

        if (Qpasta - Spasta >= quant)
        {
            Spasta += quant;
            Total_pasta += quant * 120;
            cout << "\n\n\t\t" << quant << " Pasta is the order!";
        }
        else
        {
            cout << "\n\t Only" << Qpasta - Spasta << " Pasta remaining in hotel ";
        }
        break;
    case 3:
        cout << "\n\n Enter Burger Quantity : ";
        cin >> quant;

        if (Qburger - Sburger >= quant)
        {
            Sburger += quant;
            Total_burger += quant * 250;
            cout << "\n\n\t\t" << quant << " Burgers the order!";
        }
        else
        {
            cout << "\n\t Only" << Qburger - Sburger << " Burger remaining in hotel ";
        }
        break;
    case 4:
        cout << "\n\n Enter Noodles Quantity : ";
        cin >> quant;

        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles += quant;
            Total_noodles += quant * 100;
            cout << "\n\n\t\t" << quant << " Noodles is the order!";
        }
        else
        {
            cout << "\n\t Only" << Qnoodles - Snoodles << " Noodles remaining in hotel ";
        }
        break;
    case 5:
        cout << "\n\n Enter Shakes Quantity : ";
        cin >> quant;

        if (Qshake - Sshake >= quant)
        {
            Sshake += quant;
            Total_shake += quant * 130;
            cout << "\n\n\t\t" << quant << " Shake is the order!";
        }
        else
        {
            cout << "\n\t Only" << Qshake - Sshake << " Shakes remaining in hotel ";
        }
        break;

    case 6:
        cout << "\n\n Enter Chicken-roll Quantity : ";
        cin >> quant;

        if (Qchicken - Schicken >= quant)
        {
            Schicken += quant;
            Total_chicken += quant * 200;
            cout << "\n\n\t\t" << quant << " Chicken-roll is the order!";
        }
        else
        {
            cout << "\n\t Only" << Qchicken - Schicken << " Chicken-roll  remaining in hotel ";
        }
        break;

    case 7:

        cout << "\n\t\t Details of sales and collection ";
        cout << "\n\n Number of rooms we had : " << Qrooms;
        cout << "\n Number of rooms we gave for rent : " << Srooms;
        cout << "\n Remaining rooms : " << Qrooms - Srooms;
        cout << "\n Total_rooms collection for the day : " << Total_rooms;

        cout << "\n\n Number of pastas we had : " << Qpasta;
        cout << "\n Number of pastas we sold " << Spasta;
        cout << "\n Remaining pastas : " << Qpasta - Spasta;
        cout << "\n Total_pasta collection for the day : " << Total_pasta;

        cout << "\n\n Number of burgers we had : " << Qburger;
        cout << "\n Number of burgers we sold " << Sburger;
        cout << "\n Remaining burgers : " << Qburger - Sburger;
        cout << "\n Total_burger collection for the day : " << Total_burger;

        cout << "\n\n Number of noodles we had : " << Qnoodles;
        cout << "\n Number of noodles we sold " << Snoodles;
        cout << "\n Remaining noodles : " << Qnoodles - Snoodles;
        cout << "\n Total_noodles collection for the day : " << Total_noodles;

        cout << "\n\n Number of shakes we had : " << Qshake;
        cout << "\n Number of shakes we sold " << Sshake;
        cout << "\n Remaining shakes : " << Qshake - Sshake;
        cout << "\n Total_shake collection for the day : " << Total_shake;

        cout << "\n\n Number of chicken-roll we had : " << Qchicken;
        cout << "\n Number of chicken-roll we sold " << Schicken;
        cout << "\n Remaining chicken-roll : " << Qchicken - Schicken;
        cout << "\n Total_chicken collection for the day : " << Total_chicken;
        cout << "\n\n\n Total collection for the day : " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
        break;
    case 8:
        exit(0);

    default:
        cout << "\n Please select the numbers mentioned above!";
    }
    goto m;


    return 0;
}
