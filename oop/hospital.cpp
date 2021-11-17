#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};
class Staff : public Person
{
public:
    int employeeid;
    int salary;
    string shift;
};
class Patient : public Person
{
public:
    int healthid;
    string registerationdate;
    string type;
    int assigned_doctor;
    void assign(int id)
    {
        assigned_doctor = id;
    }
};
class Doctor : public Staff
{
public:
    string specialization;
    int assigned = 0;
    void assign(int id)
    {
        assigned = id;
    }
};
Patient createpatient()
{
    cout << "-------\nEnter details for new patient:";
    Patient newp;
    cout << "\nname: ";
    cin >> newp.name;
    cout << "age: ";
    cin >> newp.age;
    cout << "id: ";
    cin >> newp.healthid;
    cout << "registeration date: ";
    cin >> newp.registerationdate;
    return newp;
}
Doctor createdoctor()
{
    cout << "-----\nEnter details for new Doctor:";
    Doctor newd;
    cout << "\nname: ";
    cin >> newd.name;
    cout << "age: ";
    cin >> newd.age;
    cout << "id: ";
    cin >> newd.employeeid;
    cout << "Shift (day or night): ";
    cin >> newd.shift;
    cout << "Area of specialization: ";
    cin >> newd.specialization;
    return newd;
}
int main()
{
    Patient patient_list[10];
    int no_of_p = 0;
    Doctor doctor_list[10];
    int no_of_d = 0;
    cout << "                                                                        \n";
    cout << " |_|  _   _ ._  o _|_  _. |   |\\/|  _. ._   _.  _   _  ._ _   _  ._ _|_ \n";
    cout << " | | (_) _> |_) |  |_ (_| |   |  | (_| | | (_| (_| (/_ | | | (/_ | | |_ \n";
    cout << "            |                                   _|                      \n";
    int selection;
    while (selection != 9)
    {
        cout << "\n---------\nList of actions:\n";
        cout << "1) Add a new patient\n2) Show all patients\n3) Add a new doctor\n4) Show all doctors\n5) Assign a patient to doctor";
        cout << "\n Select an action: ";
        cin >> selection;
        switch (selection)
        {
        case 1:
        {
            patient_list[no_of_p] = createpatient();
            no_of_p++;
            break;
        }
        case 2:
        {
            if (no_of_p != 0)
            {
                cout << "---------\nList of Patients\n";
            }
            cout << "name  |  age  |  id  | date_registered\n";
            for (int i = 0; i < no_of_p; i++)
            {
                cout << patient_list[i].name << "  |  " << patient_list[i].age << "  |  " << patient_list[i].healthid << "  |  ";
                cout << patient_list[i].registerationdate << "\n";
            }
            break;
        }
        case 3:
        {
            doctor_list[no_of_d] = createdoctor();
            no_of_d++;
            break;
        }
        case 4:
        {
            if (no_of_d != 0)
            {
                cout << "---------\nList of Doctors\n";
            }
            cout << "name  |  age  |  id  | specialization  |  assigned patient\n";
            for (int i = 0; i < no_of_d; i++)
            {
                cout << doctor_list[i].name << "  |  " << doctor_list[i].age << "  |  " << doctor_list[i].employeeid << "  |  ";
                cout << doctor_list[i].specialization;
                if (doctor_list[i].assigned == 0)
                {
                    cout << doctor_list[i].assigned << "\n";
                }
                else if (doctor_list[i].assigned != 0)
                {
                    cout << "none"
                         << "\n";
                }
            }
            break;
        }
        case 5:
        {
            int inpid;
            int pid;
            cout << "-----\nEnter the doctor ID: ";

            cin >> inpid;
            cout << "-----\nEnter the relevant patient ID: ";

            cin >> pid;
            for (int i = 0; i < no_of_d; i++)
            {
                if (doctor_list[i].employeeid == inpid)
                {
                    doctor_list[i].assign(pid);
                }
            }
            break;
        }
        default:
        {
            cout << "Enter something!";
            break;
        }
        }
        // cout << "\033[2J\033[1;1H";
    }
    return 0;
}
