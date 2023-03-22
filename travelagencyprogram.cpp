#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<fstream>
#include<exception>
#include<string.h>


//int fst,tst,nst,tt,rt;

using namespace std;

enum HotelType {
VT_Fstar, VT_Tstar, VT_Normal
};

enum TranportType {
TT_Train, TT_Road
};

class Hotel
{
public:
    string hotel;
    string destination;
    string bname;
    string add;
    string typeofhotel;
    int cdd,cmm,cyyyy;
    int noofdays;
    int noofrooms;
    virtual void Assignprice() = 0;
    static Hotel* Createl(HotelType type);
};
class Fstar : public Hotel
{
public:
    int fst;
    void Assignprice()
    {
        int choice;
          cout<<"\n";
          cout<<"\n------------------------------------------------------------------------------------------\n";
          cout<<"PLEASE CHOOSE YOUR DESTINATION..\n";
          cout<<"1:Coorg                        2:Mysore\n";
          cout<<"3:Chikamaglur                  4:Udupi\n";
          cout<<"5:Bangalore                    6:Hampi\n";
          cout<<"7:Murudeshwar                  8: Gokarna\n";
          cout<<"9:Dandeli                     10: Pattadakal\n";
          cout<<"\n";
          cout<<"Enter your choice to Reserve: ";
          cin>>choice;
          switch(choice)
          {
              case 1:destination="Coorg";fst=5000;
                    break;
              case 2:destination="Mysore";fst=5500;
                    break;
              case 3:destination="Chikamaglur";fst=4000;
                    break;
              case 4:destination="Udupi";fst=5000;
                    break;
              case 5:destination="Bangalore";fst=6000;
                    break;
              case 6:destination="Hampi";fst=5500;
                    break;
              case 7:destination="Murudeshwar";fst=4500;
                    break;
              case 8:destination="Gokarna";fst=4500;
                    break;
              case 9:destination="Dandeli";fst=5000;
                    break;
             case 10:destination="Pattadakal";fst=4500;
                    break;
          }
          typeofhotel="5Star_Hotel";
          showHotel(destination);

    }
    void showHotel(string destination)
    {
        cout<<"\n------------------------------------------------------------------------------------------\n";
        if(destination=="Coorg")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Coorg        taj                        5000Rs         "<<endl;
           cout<<"    5      Coorg        fortview                   5000Rs.        "<<endl;
        }
        else if(destination=="Mysore")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Mysore       metro                      5500Rs.        "<<endl;
           cout<<"    5      Mysore       president                  5500Rs.        "<<endl;
        }
        else if(destination=="Chikamaglur")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Chikamaglur  shelter                    4000Rs.        "<<endl;
           cout<<"    5      Chikamaglur  safari                     4000Rs.        "<<endl;
        }
        else if(destination=="Udupi")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Udupi        Naveen                     5000Rs         "<<endl;
           cout<<"    5      Udupi        keys                       5000Rs.        "<<endl;
        }
        else if(destination=="Bangalore")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Bangalore    yellowbricks               6000Rs.        "<<endl;
           cout<<"    5      Bangalore    fivepoints                 6000Rs.        "<<endl;
        }
        else if(destination=="Hampi")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Hampi        majestic                   5500Rs.        "<<endl;
           cout<<"    5      Hampi        royalboat                  5500Rs.        "<<endl;
        }
        else if(destination=="Murudeshwar")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Murudeshwar  vijetha                    4500Rs         "<<endl;
           cout<<"    5      Murudeshwar  zeroprop                   4500Rs.        "<<endl;
        }
       else if(destination=="Gokarna")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Gokarna      cityview                   4500Rs.        "<<endl;
           cout<<"    5      Gokarna      noots                      4500Rs.        "<<endl;
        }
       else if(destination=="Dandeli")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Dandeli      strongbuilt                5000Rs.        "<<endl;
           cout<<"    5      Dandeli      aboard                     5000Rs.        "<<endl;
        }
        else
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    5      Pattadakal   stonecity                  4500Rs.        "<<endl;
           cout<<"    5      Pattadakal   empirecity                 4500Rs.        "<<endl;
        }
       cout<<"\n";
       cout<<"\n------------------------------------------------------------------------------------------\n";
       cout<<"...PLEASE FILL IN THE DETAILS ...\n";
       cout<<"HOTEL RESERVATION FORM\n";
       cout<<"Booking Name: ";
       cin>>bname;
       cout<<"Address: ";
       cin>>add;
       cout<<"Destination: "<<destination<<endl;
       cout<<"Type of Hotel: "<<typeofhotel<<endl;
       cout<<"Name of Hotel: ";
       cin>>hotel;
       cout<<"Date of Check-in: ";
       cin>>cdd>>cmm>>cyyyy;
       cout<<"No. Of Rooms: ";
       cin>>noofrooms;
       cout<<"No. of days to stay: ";
       cin>>noofdays;

      confirmBooking();
    }
    void confirmBooking()
    {

        fst=fst*noofrooms*noofdays;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"Please Wait while we make Reservation\n";
        unsigned int microsecond = 1000000;
        usleep(10 * microsecond);//sleeps for 3 second

        cout<<"Hotel     Reservation  \n";
        cout<<"-----------------------\n";
        cout<<"Name:"<<bname<<endl;
        cout<<"Address:"<<add<<endl;
        cout<<"Type of Hotel: "<<typeofhotel<<endl;
        cout<<"Name of the hotel: "<<hotel<<", "<<destination<<endl;
        cout<<"Date of Check-In: "<<cdd<<"/"<<cmm<<"/n"<<cyyyy<<endl;
        cout<<"No. of Rooms: "<<noofrooms<<endl;
        cout<<"No. of Days to stay: "<<noofdays<<endl;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"\nYour Reservations have been done\n"
                "Please pay the Amount!!!\n";
        cout<<"Amount: Rs."<<fst<<endl;
    CreateHotelFile();
    }
    void CreateHotelFile()
    {
        fstream customerHotelfile;
            customerHotelfile.open("customerHotelfile.txt",ios::binary|ios::app);
            if (!customerHotelfile)
            {
                cout << "File not created!";
            }
            else
            {
                customerHotelfile <<"\n"<<bname<<"\t"<<add<<"\t"<<typeofhotel<<"\t"<<hotel<<","<<destination<<"\t"<<cdd<<"/"<<cmm<<"/"<<cyyyy<<"\t"<<noofrooms<<"\t"<<noofdays<<"\t"<<fst<<endl;

            }
            customerHotelfile.close();

    }
};

class Tstar : public Hotel
{
public:
    int tst;
    void Assignprice()
    {
        int choice;
          cout<<"\n";
          cout<<"\n------------------------------------------------------------------------------------------\n";
          cout<<"PLEASE CHOOSE YOUR DESTINATION..\n";
          cout<<"1:Coorg                        2:Mysore\n";
          cout<<"3:Chikamaglur                  4:Udupi\n";
          cout<<"5:Bangalore                    6:Hampi\n";
          cout<<"7:Murudeshwar                  8: Gokarna\n";
          cout<<"9:Dandeli                     10: Pattadakal\n";
          cout<<"Enter your choice to Reserve: ";
          cin>>choice;
          switch(choice)
          {
              case 1:destination="Coorg",tst=2000;
                    break;
              case 2:destination="Mysore",tst=2500;
                    break;
              case 3:destination="Chikamaglur",tst=1200;
                    break;
              case 4:destination="Udupi",tst=1500;
                    break;
              case 5:destination="Bangalore",tst=2500;
                    break;
              case 6:destination="Hampi",tst=2000;
                    break;
              case 7:destination="Murudeshwar",tst=1500;
                    break;
              case 8:destination="Gokarna",tst=1000;
                    break;
              case 9:destination="Dandeli",tst=1000;
                    break;
             case 10:destination="Pattadakal",tst=1500;
                    break;
          }
          typeofhotel="3Star_Hotel";
          showHotel(destination);

    }
    void showHotel(string destination)
    {
        cout<<"\n------------------------------------------------------------------------------------------\n";
        if(destination=="Coorg")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Coorg        Prachi                     2000Rs.        "<<endl;
           cout<<"    3      Coorg        Keshari                    2000Rs.        "<<endl;
        }
        else if(destination=="Mysore")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Mysore       Janpath                    2500Rs         "<<endl;
           cout<<"    3      Mysore       Lingraj                    2500Rs.        "<<endl;
        }
        else if(destination=="Chikamaglur")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Chikamaglur  resort                     1200Rs.        "<<endl;
           cout<<"    3      Chikamaglur  copperchimney              1200Rs.        "<<endl;
        }
        else if(destination=="Udupi")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Udupi        Rajputana                  1500Rs         "<<endl;
           cout<<"    3      Udupi        Clarks                     1500Rs.        "<<endl;
        }
        else if(destination=="Bangalore")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Bangalore    jesture                    2500Rs.        "<<endl;
           cout<<"    3      Bangalore    best                       2500Rs.        "<<endl;
        }
        else if(destination=="Hampi")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Hampi        Rama                       2000Rs.        "<<endl;
           cout<<"    3      Hampi        Kinshu                     2000Rs.        "<<endl;
        }
        else if(destination=="Murudeshwar")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Murudeshwar  Kingfort                   1500Rs         "<<endl;
           cout<<"    3      Murudeshwar  Royal                      1500Rs.        "<<endl;
        }
       else if(destination=="Gokarna")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Gokarna      Executive                  1000Rs.        "<<endl;
           cout<<"    3      Gokarna      Fairlawn                   1000Rs.        "<<endl;
        }
       else if(destination=="Dandeli")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Dandeli      dholamaru                  1000Rs.        "<<endl;
           cout<<"    3      Dandeli      Rajstar                    1000Rs.        "<<endl;
        }
        else
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"    3      Pattadakal   Anarkali                   1500Rs.        "<<endl;
           cout<<"    3      Pattadakal   Pushpak                    1500Rs.        "<<endl;
        }
       cout<<"\n";
       cout<<"\n------------------------------------------------------------------------------------------\n";
       cout<<"...PLEASE FILL IN THE DETAILS ...\n";
       cout<<"HOTEL RESERVATION FORM\n";
       cout<<"Booking Name: ";
       cin>>bname;
       cout<<"Address: ";
       cin>>add;
       cout<<"Destination: "<<destination<<endl;
       cout<<"Type of Hotel: "<<typeofhotel<<endl;
       cout<<"Name of Hotel: ";
       cin>>hotel;
       cout<<"Date of Check-In: ";
       cin>>cdd>>cmm>>cyyyy;
       cout<<"No. Of Rooms: ";
       cin>>noofrooms;
       cout<<"No. of days to stay: ";
       cin>>noofdays;

      confirmBooking();
    }
    void confirmBooking()
    {

        tst=tst*noofrooms*noofdays;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"Please Wait while we make Reservation\n";
        unsigned int microsecond = 1000000;
        usleep(100 * microsecond);//sleeps for 3 second

        cout<<"Hotel     Reservation  \n";
        cout<<"-----------------------\n";
        cout<<"Name:"<<bname<<endl;
        cout<<"Address:"<<add<<endl;
        cout<<"Type of Hotel: "<<typeofhotel<<endl;
        cout<<"Name of the hotel: "<<hotel<<", "<<destination<<endl;
        cout<<"Date of Check-In: "<<cdd<<"/"<<cmm<<"/"<<cyyyy;
        cout<<"No. Of Rooms: "<<noofrooms<<endl;
        cout<<"No. of Days to stay: "<<noofdays<<endl;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"\nYour Reservations have been done\n"
                "Please pay the Amount!!!\n";
        cout<<"Amount: Rs."<<tst<<endl;
    CreateHotelFile();
    }
    void CreateHotelFile()
    {
        fstream customerHotelfile;
            customerHotelfile.open("customerHotelfile.txt",ios::binary|ios::app);
            if (!customerHotelfile)
            {
                cout << "File not created!";
            }
            else
            {
                customerHotelfile <<"\n"<<bname<<"\t"<<add<<"\t"<<typeofhotel<<"\t"<<hotel<<","<<destination<<"\t"<<cdd<<"/"<<cmm<<"/"<<cyyyy<<"\t"<<noofrooms<<"\t"<<noofdays<<"\t"<<tst<<endl;

            }
            customerHotelfile.close();

    }
};

class Normal : public Hotel
{
public:
    int nst;
    void Assignprice()
    {
        int choice;
          cout<<"\n";
          cout<<"\n------------------------------------------------------------------------------------------\n";
          cout<<"PLEASE CHOOSE YOUR DESTINATION..\n";
          cout<<"1:Coorg                        2:Mysore\n";
          cout<<"3:Chikamaglur                  4:Udupi\n";
          cout<<"5:Bangalore                    6:Hampi\n";
          cout<<"7:Murudeshwar                  8: Gokarna\n";
          cout<<"9:Dandeli                     10: Pattadakal\n";
          cout<<"Enter your choice to Reserve: ";
          cin>>choice;
          switch(choice)
          {
              case 1:destination="Coorg",nst=500;
                    break;
              case 2:destination="Mysore",nst=800;
                    break;
              case 3:destination="Chikamaglur",nst=450;
                    break;
              case 4:destination="Udupi",nst=500;
                    break;
              case 5:destination="Bangalore",nst=900;
                    break;
              case 6:destination="Hampi",nst=500;
                    break;
              case 7:destination="Murudeshwar",nst=450;
                    break;
              case 8:destination="Gokarna",nst=450;
                    break;
              case 9:destination="Dandeli",nst=500;
                    break;
             case 10:destination="Pattadakal",nst=500;
                    break;
          }
          typeofhotel="Normal_Hotel";
          showHotel(destination);
    }
    void showHotel(string destination)
    {
        cout<<"\n------------------------------------------------------------------------------------------\n";
        if(destination=="Coorg")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Coorg        Minerva                    500Rs.         "<<endl;
           cout<<"  normal   Coorg        Lindsay                    500Rs.         "<<endl;
        }
        else if(destination=="Mysore")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Mysore       Plaza                      800Rs.          "<<endl;
           cout<<"  normal   Mysore       Shilton                    800Rs.         "<<endl;
        }
        else if(destination=="Chikamaglur")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Chikamaglur  Paragon                    450Rs.         "<<endl;
           cout<<"  normal   Chikamaglur  guesthouse                 450Rs.         "<<endl;
        }
        else if(destination=="Udupi")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Udupi        parkview                   500Rs.         "<<endl;
           cout<<"  normal   Udupi        geetanjali                 500Rs.         "<<endl;
        }
        else if(destination=="Bangalore")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Bangalore    Diplomat                   900Rs.         "<<endl;
           cout<<"  normal   Bangalore    Continental                900Rs.         "<<endl;
        }
        else if(destination=="Hampi")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Hampi        marwari                    500Rs.        "<<endl;
           cout<<"  normal   Hampi        satkar                     500Rs.        "<<endl;
        }
        else if(destination=="Murudeshwar")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Murudeshwar  Mayur                      450Rs.         "<<endl;
           cout<<"  normal   Murudeshwar  Chaitanya                  450Rs.         "<<endl;
        }
       else if(destination=="Gokarna")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Gokarna      Ashok                      450Rs.         "<<endl;
           cout<<"  normal   Gokarna      Patliputra                 450Rs.         "<<endl;
        }
       else if(destination=="Dandeli")
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Dandeli      star                       500Rs.         "<<endl;
           cout<<"  normal   andeli      Hornbill                    500Rs.         "<<endl;
        }
        else
        {
           cout<<"Accomodation Available::"<<endl;
           cout<<"   Star    Place        NAME Of Hotel              Tariff         "<<endl;
           cout<<"  normal   Pattadakal   Himalaya                   500Rs.         "<<endl;
           cout<<"  normal   Pattadakal   Himalaya                   500Rs.         "<<endl;
        }
       cout<<"\n";
       cout<<"\n------------------------------------------------------------------------------------------\n";
       cout<<"...PLEASE FILL IN THE DETAILS ...\n";
       cout<<"HOTEL RESERVATION FORM\n";
       cout<<"Booking Name: ";
       cin>>bname;
       cout<<"Address: ";
       cin>>add;
       cout<<"Destination: "<<destination<<endl;
       cout<<"Type of Hotel: "<<typeofhotel<<endl;
       cout<<"Name of Hotel: ";
       cin>>hotel;
       cout<<"Date of Check-In: ";
       cin>>cdd>>cmm>>cyyyy;
       cout<<"No. of Rooms: ";
       cin>>noofrooms;
       cout<<"No. of days to stay: ";
       cin>>noofdays;

      confirmBooking();
    }
    void confirmBooking()
    {

        nst=nst*noofrooms*noofdays;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"Please Wait while we make Reservation\n";
        unsigned int microsecond = 1000000;
        usleep(100 * microsecond);//sleeps for 3 second

        cout<<"Hotel     Reservation  \n";
        cout<<"-----------------------\n";
        cout<<"Name:"<<bname<<endl;
        cout<<"Address:"<<add<<endl;
        cout<<"Type of Hotel: "<<typeofhotel<<endl;
        cout<<"Name of the hotel: "<<hotel<<", "<<destination<<endl;
        cout<<"Date of Check-In: "<<cdd<<"/"<<cmm<<"/"<<cyyyy;
        cout<<"No. of Rooms: "<<noofrooms<<endl;
        cout<<"No. of Days to stay: "<<noofdays<<endl;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"\nYour Reservations have been done\n"
                "Please pay the Amount!!!\n";
        cout<<"Amount: Rs."<<nst<<endl;
    CreateHotelFile();
    }
    void CreateHotelFile()
    {
        fstream customerHotelfile;
            customerHotelfile.open("customerHotelfile.txt",ios::binary|ios::app);
            if (!customerHotelfile)
            {
                cout << "File not created!";
            }
            else
            {
                customerHotelfile <<"\n"<<bname<<"\t"<<add<<"\t"<<typeofhotel<<"\t"<<hotel<<","<<destination<<"\t"<<cdd<<"/"<<cmm<<"/"<<cyyyy<<"\t"<<noofrooms<<"\t"<<noofdays<<"\t"<<nst<<endl;

            }
            customerHotelfile.close();

    }

};
Hotel* Hotel::Createl(HotelType type)
{
    if (type == VT_Fstar)
        return new Fstar();
    else if (type == VT_Tstar)
        return new Tstar();
    else if (type == VT_Normal)
        return new Normal();
    else return NULL;
}
class Transport
{
public:
    string tname;
    string tadd;
    string destination;
    string trans;
    string modeoftransport;
    int tdd,tmm,tyyyy;
    int nooftickets;
    virtual void Assignprice() = 0;
    static Transport* Create2(TranportType type);
};
class Train : public Transport
{
public:
    int tt;
    void Assignprice()
    {
        int choice;
          cout<<"\n";
          cout<<"\n------------------------------------------------------------------------------------------\n";
          cout<<"PLEASE CHOOSE YOUR DESTINATION..\n";
          cout<<"1:Coorg                        2:Mysore\n";
          cout<<"3:Chikamaglur                  4:Udupi\n";
          cout<<"5:Bangalore                    6:Hampi\n";
          cout<<"7:Murudeshwar                  8: Gokarna\n";
          cout<<"9:Dandeli                     10: Pattadakal\n";
          cout<<"\n";
          cout<<"Enter your choice to Reserve: ";
          cin>>choice;
          switch(choice)
          {
              case 1:destination="Coorg";tt=800;
                    break;
              case 2:destination="Mysore";tt=1500;
                    break;
              case 3:destination="Chikamaglur";tt=600;
                    break;
              case 4:destination="Udupi";tt=1200;
                    break;
              case 5:destination="Bangalore";tt=1600;
                    break;
              case 6:destination="Hampi";tt=600;
                    break;
              case 7:destination="Murudeshwar";tt=455;
                    break;
              case 8:destination="Gokarna";tt=550;
                    break;
              case 9:destination="Dandeli";tt=300;
                    break;
             case 10:destination="Pattadakal";tt=300;
                    break;
          }
          modeoftransport="Train";
          showTransport(destination);
    }
     void showTransport(string destination)
    {
        cout<<"\n------------------------------------------------------------------------------------------\n";
        if(destination=="Coorg")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Train Coorg.   Kerala_Express    800Rs.         06:00(d)-08:00(d)"<<endl;
           cout<<"  By Train Coorg.    Jammu_Mail       800Rs.         08:00(d)-10:00(d)"<<endl;
        }
        else if(destination=="Mysore")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Train Mysore.   Madras_Express   1500Rs.        06:00(d)-18:00(a)"<<endl;
           cout<<"  By Train Mysore.    Madurai_Mail    1500Rs.        08:00(d)-20:00(a)"<<endl;
        }
        else if(destination=="Chikamaglur")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME             Price            Timings       "<<endl;
           cout<<"  BY Train Chikamaglur hyderabad_Express 600Rs.       09:00(d)-12:00(a)"<<endl;
           cout<<"  By Train Chikamaglur Andhra_Mail       600Rs.       11:00(d)-13:30(a)"<<endl;
        }
        else if(destination=="Udupi")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Train Udupi.   Rajdhani_Express  1200Rs.        08:00(d)-18:00(a)"<<endl;
           cout<<"  By Train Udupi.    Pune_Mail        1200Rs.        05:00(d)-10:30(d)"<<endl;
        }
        else if(destination=="Bangalore")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Train Bangalore  Assam_Express   1600Rs.        06:00(d)-13:00(a)"<<endl;
           cout<<"  By Train Bangalore  Guwahati_Mail   1600Rs.        05:00(d)-12:30(a)"<<endl;
        }
        else if(destination=="Hampi")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Train Hampi.   Arunachal_Express 600Rs.         07:30(d)-10:00(a)"<<endl;
           cout<<"  By Train Hampi.   Bomdila_Mail      600Rs.         08:00(d)-11:30(a)"<<endl;
        }
        else if(destination=="Murudeshwar")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Train Murudeshwar Patna_Express  455Rs.         10:00(d)-15:00(a)"<<endl;
           cout<<"  By Train Murudeshwar Gaya_Mail      455Rs.         11:00(d)-16:30(a)"<<endl;
        }
       else if(destination=="Gokarna")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Train Gokarna  Rajdhani_Express  550Rs.         12:00(a)-16:00(a)"<<endl;
           cout<<"  By Train Gokarna     kalka_Mail     550Rs.         15:00(a)-19:30(a)"<<endl;
        }
       else if(destination=="Dandeli")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Train Dandeli   Shatabdi_Express 300Rs.         06:00(d)-20:00(d)"<<endl;
           cout<<"  By Train Dandeli   Frontier_Mail    300Rs.         11:00(d)-13:30(a)"<<endl;
        }
        else
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME             Price            Timings       "<<endl;
           cout<<"  BY Train Pattadakal Ahmedabad_Express 300Rs.         06:00(d)-10:00(d)"<<endl;
           cout<<"  By Train Pattadakal Gujarat_Mail      300Rs.         07:00(d)-11:00(d)"<<endl;
        }
       cout<<"\n";
       cout<<"\n------------------------------------------------------------------------------------------\n";
       cout<<"...PLEASE FILL IN THE DETAILS ...\n";
       cout<<"RAILWAY RESERVATION FORM\n";
       cout<<"Booking Name: ";
       cin>>tname;
       cout<<"Address: ";
       cin>>tadd;
       cout<<"Mode of Transport: "<<modeoftransport<<endl;
       cout<<"Train Name: ";
       cin>>trans;
       cout<<"Date of Travel: ";
       cin>>tdd>>tmm>>tyyyy;
       cout<<"Destination: "<<destination<<endl;
       cout<<"Enter the No.of tickets: ";
       cin>>nooftickets;

      confirmTBooking();
    }
    void confirmTBooking()
    {

        tt=tt*nooftickets;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"Please Wait while we make Reservation\n";
        unsigned int microsecond = 1000000;
        usleep(100 * microsecond);//sleeps for 3 second

        cout<<"TICKET     RESERVATION  \n";
        cout<<"-----------------------\n";
        cout<<"Name:"<<tname<<endl;
        cout<<"Address:"<<tadd<<endl;
        cout<<"Mode of Transport: "<<modeoftransport<<endl;
        cout<<"Train name: "<<trans<<", "<<destination<<endl;
        cout<<"Date of Travel: "<<tdd<<"/"<<tmm<<"/"<<tyyyy<<endl;
        cout<<"No.of Tickets: "<<nooftickets;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"\nYour Reservations have been done\n"
                "Please pay the Amount!!!\n";
        cout<<"Amount: Rs."<<tt<<endl;
    CreateTravelFile();
    }
    void CreateTravelFile()
    {
        fstream customerTravelfile;
            customerTravelfile.open("customerTravelfile.txt",ios::binary|ios::app);
            if (!customerTravelfile)
            {
                cout << "File not created!";
            }
            else
            {
                customerTravelfile <<"\n"<<tname<<"\t"<<tadd<<"\t"<<modeoftransport<<"\t"<<trans<<","<<destination<<"\t"<<tdd<<"/"<<tmm<<"/"<<tyyyy<<"\t"<<nooftickets<<"\t"<<tt<<endl;

            }
            customerTravelfile.close();

    }
};

class Road : public Transport
{
public:
    int rt;
    void Assignprice()
    {
        int choice;
          cout<<"\n";
          cout<<"\n------------------------------------------------------------------------------------------\n";
          cout<<"PLEASE CHOOSE YOUR DESTINATION..\n";
          cout<<"1:Coorg                        2:Mysore\n";
          cout<<"3:Chikamaglur                  4:Udupi\n";
          cout<<"5:Bangalore                    6:Hampi\n";
          cout<<"7:Murudeshwar                  8: Gokarna\n";
          cout<<"9:Dandeli                     10: Pattadakal\n";
          cout<<"\n";
          cout<<"Enter your choice to Reserve: ";
          cin>>choice;
          switch(choice)
          {
              case 1:destination="Coorg";rt=350;
                    break;
              case 2:destination="Mysore";rt=550;
                    break;
              case 3:destination="Chikamaglur";rt=400;
                    break;
              case 4:destination="Udupi";rt=500;
                    break;
              case 5:destination="Bangalore";rt=600;
                    break;
              case 6:destination="Hampi";rt=400;
                    break;
              case 7:destination="Murudeshwar";rt=450;
                    break;
              case 8:destination="Gokarna";rt=450;
                    break;
              case 9:destination="Dandeli";rt=500;
                    break;
             case 10:destination="Pattadakal";rt=450;
                    break;

        }
        modeoftransport="Road";
        showTransport(destination);
    }
     void showTransport(string destination)
    {
       cout<<"\n------------------------------------------------------------------------------------------\n";
        if(destination=="Coorg")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Bus  Coorg.    Bus_express25     350Rs.         08:00(d)-010:00(d)"<<endl;
           cout<<"  By Bus  Coorg.    Bus_express20     350Rs.         010:00(d)-12:00(d)"<<endl;
        }
        else if(destination=="Mysore")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Bus   Mysore.   Bus_express15    550Rs.         06:00(d)-18:00(a)"<<endl;
           cout<<"  By Bus   Mysore.   Bus_express29    550Rs.         08:00(d)-20:00(a)"<<endl;
        }
        else if(destination=="Chikamaglur")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME            Price            Timings       "<<endl;
           cout<<"  BY Bus Chikamaglur Bus_express27    400Rs.         10:00(d)-16:00(a)"<<endl;
           cout<<"  By Bus Chikamaglur Bus_express21    400Rs.         11:00(d)-17:30(a)"<<endl;
        }
        else if(destination=="Udupi")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Bus   Udupi.   Bus_express12     500Rs.         10:00(d)-15:00(a)"<<endl;
           cout<<"  By Bus   Udupi.   Bus_express13     500Rs.         15:00(d)-21:30(d)"<<endl;
        }
        else if(destination=="Bangalore")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Bus   Bangalore  Bus_express30   600Rs.         07:00(d)-15:00(a)"<<endl;
           cout<<"  By Bus   Bangalore  Bus_express36   600Rs.         08:00(d)-13:30(a)"<<endl;
        }
        else if(destination=="Hampi")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Bus   Hampi.   Bus_express32     400Rs.         08:30(d)-12:00(a)"<<endl;
           cout<<"  By Bus   Hampi.   Bus_express35     400Rs.         10:00(d)-13:30(a)"<<endl;
        }
        else if(destination=="Murudeshwar")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Bus   Murudeshwar Bus_express34  450Rs.         12:00(a)-17:00(a)"<<endl;
           cout<<"  By Bus   Murudeshwar Bus_express47  450Rs.         11:00(d)-18:30(a)"<<endl;
        }
       else if(destination=="Gokarna")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Bus   Gokarna  Bus_express45     450Rs.         12:00(a)-17:00(a)"<<endl;
           cout<<"  By Bus   Gokarna  Bus_express51     450Rs.         16:00(a)-20:30(a)"<<endl;
        }
       else if(destination=="Dandeli")
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME           Price            Timings       "<<endl;
           cout<<"  BY Bus   Dandeli   Bus_express55    500Rs.         11:30(d)-13:00(a)"<<endl;
           cout<<"  By Bus   Dandeli   Bus_express65    500Rs.         12:00(d)-14:30(a)"<<endl;
        }
        else
        {
           cout<<"Transportation Available::(from Hubli)"<<endl;
           cout<<"   MODE    Place        NAME             Price            Timings       "<<endl;
           cout<<"  BY Bus   Pattadakal Bus_express52   450Rs.         06:00(d)-11:00(d)"<<endl;
           cout<<"  By Bus   Pattadakal Bus_express69   450Rs.         07:00(d)-12:00(d)"<<endl;
        }
       cout<<"\n";
       cout<<"\n------------------------------------------------------------------------------------------\n";
       cout<<"...PLEASE FILL IN THE DETAILS ...\n";
       cout<<"BUS RESERVATION FORM\n";
       cout<<"Booking Name: ";
       cin>>tname;
       cout<<"Address: ";
       cin>>tadd;
       cout<<"Mode of Transport: "<<modeoftransport<<endl;
       cout<<"Bus Name: ";
       cin>>trans;
       cout<<"Date of Travel: ";
       cin>>tdd>>tmm>>tyyyy;
       cout<<"Destination: "<<destination<<endl;
       cout<<"No.of Tickets: ";
       cin>>nooftickets;

      confirmTBooking();
    }
    void confirmTBooking()
    {

        rt=rt*nooftickets;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"Please Wait while we make Reservation\n";
        unsigned int microsecond = 1000000;
        usleep(100 * microsecond);//sleeps for 3 second

        cout<<"Hotel     Reservation  \n";
        cout<<"-----------------------\n";
        cout<<"Name:"<<tname<<endl;
        cout<<"taddress:"<<tadd<<endl;
        cout<<"Mode of Transport: "<<modeoftransport<<endl;
        cout<<"Bus name: "<<trans<<", "<<destination<<endl;
        cout<<"Date of Travel: "<<tdd<<"/"<<tmm<<"/"<<tyyyy<<endl;
        cout<<"No.of Tickets: "<<nooftickets;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"\nYour Reservations have been done\n"
                "Please pay the Amount!!!\n";
        cout<<"Amount: Rs."<<rt<<endl;
    CreateTravelFile();
    }
    void CreateTravelFile()
    {
        fstream customerTravelfile;
            customerTravelfile.open("customerTravelfile.txt",ios::binary|ios::app);
            if (!customerTravelfile)
            {
                cout << "File not created!";
            }
            else
            {
                customerTravelfile <<"\n"<<tname<<"\t"<<tadd<<"\t"<<modeoftransport<<"\t"<<trans<<","<<destination<<"\t"<<tdd<<"/"<<tmm<<"/"<<tyyyy<<"\t"<<nooftickets<<"\t"<<rt<<endl;

            }
            customerTravelfile.close();

    }
};
Transport* Transport::Create2(TranportType type)
{
    if (type == TT_Train)
        return new Train();
    else if (type == TT_Road)
        return new Road();
    else return NULL;
}

class Booking
{
    //string hotel;
    //string transport;
    //string destination;
    int toh;
    int tot;
    Hotel *fs,*ts,*ns,*h;
    Transport *ttt,*rrt;
    //Payment p;
public:
    void sethoteldetails()
    {
       cout<<"\n------------------------------------------------------------------------------------------\n";
       cout<<"Please Enter Information For Hotel Reservation\n";
       cout<<"Please enter the choice of your hotel......\n";
       cout<<"1: 5_Star\n";
       cout<<"2: 3_Star\n";
       cout<<"3: Normal\n"<<endl;
       cin>>toh;
       try{
            if(toh<1 || toh>3)
               {
                   throw "Enter in the range of 1 to 3 only";
               }
            else
            {
                if(toh==1)
               {
                  HotelType type=VT_Fstar;
                  fs=Hotel::Createl(type);
                  fs->Assignprice();
               }
               if(toh==2)
               {
                  HotelType type=VT_Tstar;
                  ts=Hotel::Createl(type);
                  ts->Assignprice();
               }
               if(toh==3)
               {
                   HotelType type=VT_Normal;
                  ns=Hotel::Createl(type);
                  ns->Assignprice();
               }
            }
       }
       catch(const char* Exc)
       {
           cout<<Exc<<endl;
       }
    }
    void settransportationdetails()
    {
       cout<<"\n------------------------------------------------------------------------------------------\n";
       cout<<"Please Enter Information For Transport Reservation\n";
       cout<<"Please enter the choice of your hotel......\n";
       cout<<"1: Train\n";
       cout<<"2: Road \n";
       cin>>tot;
       try
         {
           if(tot<1 || tot>2)
           {
               throw "Enter in the range of 1 to 2 only";
           }
           else
           {
               if(tot==1)
               {
                  TranportType type=TT_Train;
                  ttt=Transport::Create2(type);
                  ttt->Assignprice();
               }
               if(tot==2)
               {
                  TranportType type=TT_Road;
                  rrt=Transport::Create2(type);
                  rrt->Assignprice();
               }
           }
         }
         catch(const char* Exc)
         {
             cout<<Exc<<endl;
         }

    }
    void Searchdetails()
    {
        int sch;
        do
        {
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |             SEARCH AND DELETE RECORDS              |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            1.SEARCH HOTEL RECORDS                  |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            2.SEARCH TRAVEL RECORDS                 |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            3.DELETE TRAVEL RECORDS                 |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            4.DELETE HOTEL RECORDS                  |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            5:EXIT                                  |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            cin>>sch;
            switch(sch)
            {
                case 1: cout<<"HOTEL RECORD\n";
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        searchhoteldetails();
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        break;
                case 2: cout<<"TRAVEL RECORD\n";
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        searchtraveldetails();
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        break;
                case 3: cout<<"DELETE TRAVEL RECORD\n";
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        deleteTravRec();
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        break;
                case 4: cout<<"DELETE HOTEL RECORD\n";
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        deleteHtlRec();
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        break;
                case 5: cout<<"...........................................loading\n";
                        cout<<"Going Back to main\n"<<endl;
                        break;
            }
        }while(sch!=5);

    }
    void searchhoteldetails()
    {
        string find,line;
        cout<<"Enter the name to search: ";
        cin>>find;

        ifstream myfile2;
        myfile2.open("customerHotelfile.txt");

        while (getline(myfile2, line))
        {
            if (!(line.find(find)==line.npos))
                cout << line << endl;
        }
        myfile2.close();



    }
    void searchtraveldetails()
    {
        string find,line;
        cout<<"Enter the name to search: ";
        cin>>find;

        ifstream myfile2;
        myfile2.open("customerTravelfile.txt");

        while (getline(myfile2, line))
        {
            if (!(line.find(find)==line.npos))
                cout << line << endl;
        }
        myfile2.close();


    }
    void deleteTravRec()
    {
        string find,line;
        cout<<"Enter the name to delete: ";
        cin>>find;

        ifstream myfile2;
        myfile2.open("customerTravelfile.txt");

        ofstream temp;
        temp.open("temp.txt");
        while (getline(myfile2, line))
        {
            if (line.find(find)==line.npos)
                temp << line << endl;
        }
        myfile2.close();
        temp.close();
        remove("customerTravelfile.txt");
        rename("temp.txt", "customerTravelfile.txt");

    }
    void deleteHtlRec()
    {
        string find,line;
        cout<<"Enter the name to delete: ";
        cin>>find;

        ifstream myfile2;
        myfile2.open("customerHotelfile.txt");

        ofstream temp;
        temp.open("temp.txt");
        while (getline(myfile2, line))
        {
            if (line.find(find)==line.npos)
                temp << line << endl;
        }
        myfile2.close();
        temp.close();
        remove("customerHotelfile.txt");
        rename("temp.txt", "customerHotelfile.txt");

    }
    void Viewdetails()
    {
        int vch;
        do
        {
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |             VIEW RECORDS                           |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            1.VIEW HOTEL RECORDS                    |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            2.VIEW TRAVEL RECORDS                   |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            3:EXIT                                  |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            cin>>vch;
            switch(vch)
            {
                case 1: cout<<"HOTEL RECORDS\n";
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        viewhoteldetails();
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        break;
                case 2: cout<<"TRAVEL RECORDS\n";
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        viewtraveldetails();
                        cout<<"\n------------------------------------------------------------------------------------------\n";
                        break;
                case 3: cout<<"...........................................loading\n";
                        cout<<"Going Back to main\n"<<endl;
                        break;
            }
        }while(vch!=3);


    }
    void viewhoteldetails()
    {
        string line;

        ifstream customerHotelfile;
        customerHotelfile.open("customerHotelfile.txt");
        if (!customerHotelfile.is_open())
        {
            perror("Error open");
        }
       while (getline(customerHotelfile,line))
        {
            cout<<line<<endl;
        }
        customerHotelfile.close();
    }
    void viewtraveldetails()
    {
        string line1;

        ifstream customerTravelfile;
        customerTravelfile.open("customerTravelfile.txt");
        if (!customerTravelfile.is_open())
        {
          perror("Error open");
        }
        while (getline(customerTravelfile,line1))
        {
            cout<<line1<<endl;
        }
        customerTravelfile.close();
    }



};
class customer
{
    int noofcustomers;
    int dd,mm,yyyy;
    string name;
    long long int phone;
    string address;
    string mail;
    Booking b;
public:
    void getdetails()
    {
        cout<<"\n\t\t\t\t\t\t------------------------------------------------------------------------------------------\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t Press Enter to continue Booking \n "<<endl;
        cout<<"\t\t\t\t\t\t------------------------------------------------------------------------------------------\n";
        getchar();

        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"Enter the Date of Booking: ";
        cin>>dd>>mm>>yyyy;
        cout<<"\n------------------------------------------------------------------------------------------\n";
        cout<<"Enter the number of customers: ";
        cin>>noofcustomers;
        for(int i=0;i<noofcustomers;i++)
        {
            cout<<"\n------------------------------------------------------------------------------------------\n";
            cout<<"Customer Name: ";
            cin>>name;
            cout<<"Phone No: ";
            cin>>phone;
            cout<<"Address: ";
            cin>>address;
            cout<<"E-mail: ";
            cin>>mail;
            Createfile();
        }
        int ch;
        do
        {
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |               WELCOME TO MAIN MENU                 |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            1:HOTEL BOOKING SECTIONS                |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            2:TRAVEL BOOKING SECTIONS               |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            3:SEARCH AND DELETE RECORDS             |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            4:VIEW RECORDS                          |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t    |            5:EXIT                                  |\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t     =====================================================\n";
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            cin>>ch;
                switch(ch)
            {
                case 1:b.sethoteldetails();
                       break;
                case 2:b.settransportationdetails();
                       break;
                case 3:b.Searchdetails();
                       break;
                case 4:b.Viewdetails();
                        break;
                case 5:cout<<"Thanks for choosing our services..."<<endl;
                       exit(0);
                       break;
            }
        }while(ch!=5);


    }
    void Createfile()
    {
            fstream customerfile;
            customerfile.open("customerfile.txt",ios::binary|ios::app);
            if (!customerfile)
            {
                cout << "File not created!";
            }
            else
            {
                customerfile <<dd<<" / "<<mm<<" / "<<yyyy<<"  "<<name<<"    "<<phone<<"     "<<address<<"    "<<mail<<"  \n"<<endl;
            }
            customerfile.close();
    }
};

class travelagency
{
public:
    static string name;
    static long long int phone;
    customer c;
    void showcustomerdetails()
    {
        cout<<"\n\t\t\t\t\t\t\t\t\tTravel Agency: "<<name<<"\tPhone no: "<<phone<<"\n";
        c.getdetails();

    }
};
string travelagency::name="SSD TRAVEL AGENCY";
long long int travelagency::phone=9868492047;

int main()
{
       printf("\t\t\t\t\t\t\t\t###########################################################################");
     printf("\n\t\t\t\t\t\t\t\t############                                                   ############");
     printf("\n\t\t\t\t\t\t\t\t############   Travel Agency management System Project in      ############");
     printf("\n\t\t\t\t\t\t\t\t############                                                   ############");
     printf("\n\t\t\t\t\t\t\t\t###########################################################################");
     printf("\n\t\t\t\t\t\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
     printf("\n\t\t\t\t\t\t\t\t\t        =                 WELCOME                   =");
     printf("\n\t\t\t\t\t\t\t\t\t        =                   TO                      =");
     printf("\n\t\t\t\t\t\t\t\t\t        =              TRAVEL AGENCY                =");
     printf("\n\t\t\t\t\t\t\t\t\t        =               MANAGEMENT                  =");
     printf("\n\t\t\t\t\t\t\t\t\t        =                 SYSTEM                    =");
     printf("\n\t\t\t\t\t\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
     travelagency ta;
     ta.showcustomerdetails();
}
