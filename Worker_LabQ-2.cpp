/*Q.No 2.
Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
Default values for Pay_Rate Rs. 500 per hours)
*/
#include <iostream>
#include <string>

using namespace std;

class worker {
private:
    string workerName;
    int hourWorked;
    double payRate;

public:
    worker(string name, int hour) {
        workerName = name;
        hourWorked = hour;
        payRate = 500; 
    }
    double calculateSalary() {
        return hourWorked*payRate;
    }
    void displayInfo() {
        double salary = calculateSalary();
        cout<<"\nWorker Name: "<<workerName;
        cout<<"\nhour Worked: "<<hourWorked;
        cout<<"\nPay Rate: Rs. " <<payRate<<" per hour";
        cout<<"\nTotal Salary: Rs. "<<salary;
    }
};
int main() {
    string name;
    int hour;
    cout<<"Enter Worker Name: ";
    getline(cin, name);
    cout<<"Enter Number of hour Worked: ";
    cin>>hour;
    worker worker(name, hour);
    worker.displayInfo();

    return 0;
}
