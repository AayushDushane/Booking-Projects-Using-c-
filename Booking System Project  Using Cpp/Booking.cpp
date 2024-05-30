#include<iostream>
#include<string>
using namespace std;
class UserDetails
{
protected:
  int age;
  double mobileNO;
  string email, id;


public:
    string name, middleName, lastName, location;

  void getDetails ()
  {
    cout << "Enter First Name  " << endl;
    cin >> name;
    // cout << "Enter Middle Name " << endl;
    // cin >> middleName;
    cout << "Enter Last Name " << endl;
    cin >> lastName;
    cout << "Enter Your  Location" << endl;
    cin >> location;
    cout << "Enter Moblie Number " << endl;
    cin >> mobileNO;
    cout << "Enter Your Email " << endl;
    cin >> email;
    cout << "Enter Valid ID " << endl;
    cin >> id;
    cout << "Enter Your Age " << endl;
    cin >> age;
    cout << endl;
    cout << "*************************************************" << endl;
    cout << endl;
  }
  void display ()
  {
    cout << "@" << name << " " << lastName << endl;
  }

};

class Stay:public UserDetails
{
public:
  int choose;
  void choice ()
  {
    cout << "1. HOTEL      2.Rent a Property     3.Hostel" << endl;
    cout << "Enter your Choise" << endl;
    cin >> choose;
    switch (choose)
      {
      case 1:
	cout << "HOTEL" << endl;
	int h, d, press;	//here h is used to choose the type of hotel & d for no of days to stay
	  cout << "1. 3-STAR    2. 5-STAR    3. 7-STAR" << endl;
	  cout << "Enter your Choise" << endl;
	  cin >> h;
	if (h == 1)
	  {
	    cout << " WELCOME to 3 Star Hotel" << endl;
	    cout << " The Rent Per Day is   750 RS" << endl;
	    cout << "  Enter No of days to stay" << endl;
	    cin >> d;
	    cout << "TOTAL PRICE TO PAY IS RS" << endl;
	    int total = 750 * d;
	      cout << total << endl;
	      cout << "Press 1 to Book OR 2 For Cancle" << endl;
	      cin >> press;
	    switch (press)
	      {
	      case 1:
		cout << "Room Booked" << endl;
		break;
		case 2:cout << "Cancled" << endl;
		cout << "Thanks for visiting" << endl;
	      }
	  }
	if (h == 2)
	  {
	    cout << " WELCOME to 5 Star Hotel" << endl;
	    cout << " The Rent Per Day is  14,999 RS" << endl;
	    cout << "  Enter No of days to star" << endl;
	    cin >> d;
	    cout << "TOTAL PRICE TO PAY IS RS" << endl;
	    int total = 14999 * d;
	    cout << total << endl;
	    cout << "Press 1 to Book OR 2 For Cancle" << endl;
	    cin >> press;
	    switch (press)
	      {
	      case 1:
		cout << "Room Booked" << endl;
		break;
	      case 2:
		cout << "Cancled" << endl;
		cout << "Thanks for visiting" << endl;
	      }
	  }
	if (h == 3)
	  {
	    cout << " WELCOME to 7 Star Hotel" << endl;
	    cout << " The Rent Per Day is  20,000 RS" << endl;
	    cout << "  Enter No of days to star" << endl;
	    cin >> d;
	    cout << "TOTAL PRICE TO PAY IS RS" << endl;
	    int total = 20000 * d;
	    cout << total << endl;
	    cout << "Press 1 to Book OR 2 For Cancle" << endl;
	    cin >> press;
	    switch (press)
	      {
	      case 1:
		cout << "Room Booked" << endl;
		break;
	      case 2:
		cout << "Cancled" << endl;
		cout << "Thanks for visiting" << endl;
	      }
	  }
	break;
      case 2:
	cout << "Rent a Villa" << endl;
	int day, t, presss;
	cout << "WELCOME To Rent A Villa" << endl;
	cout << "Cost per Night is 52,000 RS per Night" << endl;
	cout << "Enter the no of days to Stay" << endl;
	cin >> day;
	t = 52000 * day;	//t is total amount
	cout << "Total Price To Pay-" << t << endl;
	cout << "Press 1 to Book OR 2 For Cancle" << endl;
	cin >> presss;
	switch (presss)
	  {
	  case 1:
	    cout << "Villa Booked" << endl;
	    break;
	  case 2:
	    cout << "Cancled" << endl;
	    cout << "Thanks for visiting" << endl;
	    break;
	  }

	break;
      case 3:
	cout << "Hostel" << endl;
	cout << "Rent a Villa" << endl;
	int days, ttl, pres;
	cout << "WELCOME Book A Hostal room" << endl;
	cout << "Cost per Night is 200 RS per Night" << endl;
	cout << "Enter the no of days to Stay" << endl;
	cin >> days;
	ttl = 200 * days;	//ttl is total amount
	cout << "Total Price To Pay-" << ttl << endl;
	cout << "Press 1 to Book OR 2 For Cancle" << endl;
	cin >> pres;
	switch (pres)
	  {
	  case 1:
	    cout << "HOSTAL Booked" << endl;
	    break;
	  case 2:
	    cout << "Cancled" << endl;
	    cout << "Thanks for visiting" << endl;
	    break;
	  }
	break;

      default:
	cout << "Enter the valid Choise" << endl;
	break;
      }
  }
};

class Flight
{
public:
  int choose;
  void select ()
  {
    cout <<
      "1. Economy Class      2.Premium Economy     3.Business Class     4. First Class"
      << endl;
    cout << "Enter your Choise" << endl;
    cin >> choose;
    switch (choose)
      {
      case 1:
	{
	  cout << "Economy Class" << endl;
	  string day, from, to;
	  int e;
	    cout << "Enter the day to travel" << endl;
	    cin >> day;
	    cout << "TRAVEL FROM :" << endl;
	    cin >> from;
	    cout << "TRAVEL TO :" << endl;
	    cin >> to;
	    cout << "Cost of Travel from " << from << " to " << to <<
	    " is 4,999 RS " << endl;
	    cout << "PRESS 1. To Book OR 2.FOR Cancle" << endl;
	    cin >> e;		// e is uesed for choise
	  switch (e)
	    {
	    case 1:
	      cout << "TICKET BOOKED" << endl;
	      break;
	      case 2:cout << " CANCLE " << endl;
	      break;
	    }
	}
	break;
      case 2:
	{
	  cout << "Premium Economy" << endl;

	  cout << "Premium Economy Class" << endl;
	  string day, from, to;
	  int e;
	  cout << "Enter the day to travel" << endl;
	  cin >> day;
	  cout << "TRAVEL FROM :" << endl;
	  cin >> from;
	  cout << "TRAVEL TO :" << endl;
	  cin >> to;
	  cout << "Cost of Travel from " << from << " to " << to <<
	    " is 6,999 RS " << endl;
	  cout << "PRESS 1. To Book OR 2.FOR Cancle" << endl;
	  cin >> e;		// e is uesed for choise
	  switch (e)
	    {
	    case 1:
	      cout << "TICKET BOOKED" << endl;
	      break;
	    case 2:
	      cout << " CANCLE " << endl;
	      break;
	    }
	}

	break;
      case 3:
	{
	  cout << "Business Class" << endl;

	  string day, from, to;
	  int e;
	  cout << "Enter the day to travel" << endl;
	  cin >> day;
	  cout << "TRAVEL FROM :" << endl;
	  cin >> from;
	  cout << "TRAVEL TO :" << endl;
	  cin >> to;
	  cout << "Cost of Travel from " << from << " to " << to <<
	    " is 14,999 RS " << endl;
	  cout << "PRESS 1. To Book OR 2.FOR Cancle" << endl;
	  cin >> e;		// e is uesed for choise
	  switch (e)
	    {
	    case 1:
	      cout << "TICKET BOOKED" << endl;
	      break;
	    case 2:
	      cout << " CANCLE " << endl;
	      break;
	    }
	}
	break;
      case 4:
	{
	  cout << "First Class" << endl;
	  string day, from, to;
	  int e;
	  cout << "Enter the day to travel" << endl;
	  cin >> day;
	  cout << "TRAVEL FROM :" << endl;
	  cin >> from;
	  cout << "TRAVEL TO :" << endl;
	  cin >> to;
	  cout << "Cost of Travel from " << from << " to " << to <<
	    " is 24,999 RS " << endl;
	  cout << "PRESS 1. To Book OR 2.FOR Cancle" << endl;
	  cin >> e;		// e is uesed for choise
	  switch (e)
	    {
	    case 1:
	      cout << "TICKET BOOKED" << endl;
	      break;
	    case 2:
	      cout << " CANCLE " << endl;
	      break;
	    }
	}
	break;

      default:
	cout << "Enter the valid Choise" << endl;
	break;
      }
  }
};

class Rent
{
public:int choose;
  string custom;
  void selec ()
  {
    cout << "1. CAR      2.BIKE     3.SCOOTY   4. Custom" << endl;
    cout << "Enter your Choise" << endl;
    cin >> choose;
    switch (choose)
      {
      case 1:{
      int d,press;
    	cout << "CAR" << endl;
	    cout << " The Rent Per Day is   2,000 RS" << endl;
	    cout << "  Enter No of days to Rent" << endl;
	    cin >> d;
	    cout << "TOTAL PRICE TO PAY IS RS" << endl;
	    int total = 2000 * d;
	      cout << total << endl;
	      cout << "Press 1 to Book OR 2 For Cancle" << endl;
	      cin >> press;
	    switch (press)
	      {
	      case 1:
		cout << "Vehicle Booked" << endl;
		break;
		case 2:cout << "Cancled" << endl;
		cout << "Thanks for visiting" << endl;
	      }
      }
	break;
	case 2:{
	cout << "BIKE " << endl;
	 int d,press;
	 cout << " The Rent Per Day is   1,999 RS" << endl;
	    cout << "  Enter No of days to Rent" << endl;
	    cin >> d;
	    cout << "TOTAL PRICE TO PAY IS RS" << endl;
	    int total = 1999 * d;
	      cout << total << endl;
	      cout << "Press 1 to Book OR 2 For Cancle" << endl;
	      cin >> press;
	    switch (press)
	      {
	      case 1:
		cout << "Vehicle Booked" << endl;
		break;
		case 2:cout << "Cancled" << endl;
		cout << "Thanks for visiting" << endl;
	      }
      }
	break;
	case 3:{
	cout << "SCOOTY " << endl;
	 int d,press;
	 cout << " The Rent Per Day is  999 RS" << endl;
	    cout << "  Enter No of days to Rent" << endl;
	    cin >> d;
	    cout << "TOTAL PRICE TO PAY IS RS" << endl;
	    int total = 999 * d;
	      cout << total << endl;
	      cout << "Press 1 to Book OR 2 For Cancle" << endl;
	      cin >> press;
	    switch (press)
	      {
	      case 1:
		cout << "Vehicle Booked" << endl;
		break;
		case 2:cout << "Cancled" << endl;
		cout << "Thanks for visiting" << endl;
	      }
      }
	break;
	case 4:{
	cout << " Enter Custom Vehicle Name" << endl;
	cin >> custom;
	cout<<"***************************************"<<endl;
	cout << custom << endl;
	 int d,press;
	 cout << " The Rent Per Day is  9,999 RS" << endl;
	    cout << "  Enter No of days to Rent" << endl;
	    cin >> d;
	    cout << "TOTAL PRICE TO PAY IS RS" << endl;
	    int total = 9999 * d;
	      cout << total << endl;
	      cout << "Press 1 to Book OR 2 For Cancle" << endl;
	      cin >> press;
	    switch (press)
	      {
	      case 1:
		cout << "Vehicle Booked" << endl;
		break;
		case 2:cout << "Cancled" << endl;
		cout << "Thanks for visiting" << endl;
	      }
      }
	break;

	default:cout << "Enter the valid Choise" << endl;
	break;
      }
  }
};

int
main ()
{
  int pick;
  Stay s;
  Flight f;
  Rent r;
  s.getDetails();
  cout << "WELCOME TO BOOKINS SYSTEM" << endl;
  cout << endl;
  s.display ();
  cout << endl;
  cout << "*******BOOKING FOR********" << endl;

  cout << "1.Stay       2.Flights     3.Vehicle Rent" << endl;
  cin >> pick;
  switch (pick)
    {
    case 1:
      s.choice ();
      break;
    case 2:
      f.select ();
      break;
    case 3:
      r.selec ();
      break;



      //   default :
      //     cout<<"Enter the valid Choise"<<endl;
      //     break;
    }
  return 0;

}
