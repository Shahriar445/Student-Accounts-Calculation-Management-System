#include <bits/stdc++.h>
using namespace std;
#include <iomanip>
class Gpa //>----------Declaration class 1 -----------<
{
public:
    double wev_credit, total_amount, weaver;
    int reg_amount = 13680;

    double h;

    void grade(); //>------- function declaration -------<<
    void semester_credit();

    friend void show(Gpa object); //>------- Friend function  declaration -------<<
};

class Pay : public Gpa //>------- Single Inheritance (class-2) -------<<
{
public:
    void Pay_mony();
};
class Project_name //>-------  Class 3 -------<<
{
public:
    Project_name() //>------- Constructor for Congratulations showing  (default Constructor)  -------<<
    {
        cout << "\n\t\t\t\t\t=====================================" << endl;
        cout << "\n\t\t\t\t\tCongratulations your login successful \n"
             << endl;
        cout << "\t\t\t\t\t=====================================" << endl;
    }

    void design(string n)           //polymorphism function overloading
    {
        cout << n;
        // Not work anything in this function overloading
    }
    void design(int n)
    {
        cout << n;
        // Not work anything in this function overloading
    }
};

//>----------Grade calculation(Out line function ) function Definition -----------<
void Gpa::grade()
{
    cout << fixed << setprecision(2) << endl;
    int total_cost;

start:  //goto function

    cout << "\n\t\t\t\tEnter Your HSC GPA :";
    cin >> h;

    if (5.00 >= h)
    {
        if (5.00 == h)
        {
            cout << "\n\t\t\t\tYou get 100% Scholarship in tuition fee " << endl;
            total_cost = 683000 - (3500 * 143);
            cout << "\t\t\t\tYour 12 Semester total cost :" << total_cost << " Tk" << endl
                 << endl;
        }
        else if (4.80 <= h)
        {
            cout << "\n\t\t\t\tYou get 50% Scholarship in tuition fee " << endl;
            total_cost = 683000 - ((3500 * 143) * 0.50);
            cout << "\t\t\t\tYour 12 Semester total cost : " << total_cost << " Tk" << endl
                 << endl;
        }
        else if (4.50 <= h)
        {
            cout << "\n\t\t\t\tYou get 25% Scholarship in tuition fee " << endl;
            total_cost = 683000 - ((3500 * 143) * 0.25);
            cout << "\t\t\t\tYour 12 Semester total cost : " << total_cost << " Tk" << endl
                 << endl;
        }
        else if (4.00 <= h)
        {
            cout << "\n\t\t\t\tYou get 15% Scholarship in tuition fee " << endl;
            total_cost = 683000 - ((3500 * 143) * 0.15);
            cout << "\t\t\t\tYour 12 Semester total cost : " << total_cost << " Tk" << endl
                 << endl;
        }
        else if (3.50 <= h)
        {
            cout << "\n\t\t\t\tYou get 10% Scholarship in tuition fee " << endl;
            total_cost = 683000 - ((3500 * 143) * 0.10);
            cout << "\t\t\t\tYour 12 Semester total cost : " << total_cost << " Tk" << endl
                 << endl;
        }
        else if (3.49 >= h)
        {
            cout << "\n\t\t\t\tYou did not get Scholarship in tuition fee" << endl;
            total_cost = 683000;
            cout << "\t\t\t\tYour 12 Semester total cost : " << total_cost << " Taka" << endl
                 << endl;
        }
        else
        {
            cout << "\n\t\t\t\tNot valid grade " << endl;
        }
    }
    else
    {
        cout << "\n\t\t\t\tNot valid grade \n   \t\t\t\t\tUse valid grade !" << endl;
        goto start;
    }
}

//>----------Semester Credit (Out line function) -----------<
void Gpa::semester_credit()
{
    int credit, per_credit = 3500;

    cout << "\t\t\t\tHow many credit do you want in Fall semester : ";
    cin >> credit;

    cout << "\n\t\t\t\tHow many weaver you get :";
    cin >> weaver;

    wev_credit = per_credit - (per_credit * (weaver / 100));

    total_amount = wev_credit * credit;

    cout << "\n\t\t\t\tWith registration your Semester fee is :" << total_amount + reg_amount << " Taka" << endl;
}

//>----------Money Pay (Out line function) -----------<

void Pay::Pay_mony()
{
    int pay_amount, rest_amount, total;
    cout << "\t\t\t\tHow much money do you want to pay :";
    cin >> pay_amount;
    total = total_amount + reg_amount;
    if (pay_amount == total_amount)
    {
        cout << "\n\t\t\t\t\t\tYou have No due " << endl
             << endl;
    }
    else
    {
        rest_amount = total - pay_amount;
        cout << "\n\t\t\t\t\t\tYour due is : " << rest_amount << " Taka" << endl
             << endl;
    }
    cout << "\n\t\t\t\t\t\t    $ Thanks for pay $\n"
         << endl;

    cout << "\t\t\t\t\t\t***********************" << endl;
    cout << "\n\t\t\t\t\t\t     Project End \n"
         << endl;
    cout << "\t\t\t\t\t\t***********************" << endl;
}

void show(Gpa object) //>----------friend function definition -----------<
{
    cout << "\n\t\t\t\t\t---Press Enter to Continue---";
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n'); // >----------decorations -----------<
}

//>----------Main Function -----------<
int main()
{
    Project_name obje;
    // obje.design("Not work anything for this function overloading ");                 // >----------Function overloading decloration -----------<
    // obje.design(21103092);

    cout << "\t\t------------------------------------------------------------------------------------" << endl;
    cout << "\n\t\t\t\tProject Name : Welcome to the Student  Payment method\n"<< endl;
    cout << "\t\t------------------------------------------------------------------------------------" << endl;

    Gpa obj;
    show(obj); // >----------Friend function object for decoration -----------<

    /*----------------------------*/
start: // use goto function for run many time
    string login, user_name;
    cout << "\n\t\t\t\tLogin using your administrator Name : ";
    cin >> user_name;
    cout << "\n\t\t\t\tLogin using your administrator password : ";
    cin >> login;

    // >----------Login  system -----------<
    system("CLS");

    if (user_name == "student") // condition for user name                              // >----------Nested if else-----------<
    {

        if (login == "1234")
        { // condition for password

            int n, i;
            Project_name ob; // Constructor  Calling

            cout << "\n\t\t\t\tHow many Student do you want calculation :";
            cin >> n;

            Pay o[n];       //Array in object

            for (int i = 1; i <= n; i++) // looping for student collection
            {
                cout << "\n\t\t---->---Student : " << i << endl;

                o[i].grade();
                o[i].semester_credit();
                o[i].Pay_mony();
            }

            return 0;
        }
        else
        {
            cout << "\n \t\t\t\t!!!!!Login failed try again!!!!! \n"
                 << endl;
            goto start;
        }

        cin.get();
        return 0;
    }
    else
    {
        cout << "\n \t\t\t\t!!!!!Not Valid your User name  Login failed try again !" << endl;
        goto start;
    }

    // >----------Class in Object end -----------<

    return 0;
}
