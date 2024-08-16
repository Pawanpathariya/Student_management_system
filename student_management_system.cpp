#include <iostream>
using namespace std;


//student class
class Student{
protected:
string name,fathername,address,classs;
int roll_no,id,totalfee;
public:
//adding student function 
void add_student(){
    cout<<"Enter student name : ";
    cin>>name;
    cout<<"Enter student fathername : ";
    cin>>fathername;
    cout<<"Enter address : ";
    cin>>address;
    cout<<"Enter class : ";
    cin>>classs;
    cout<<"Enter roll number : ";
    cin>>roll_no;
    cout<<"Enter id number : ";
    cin>>id;
    cout<<"Enter total fees of student : ";
    cin>>totalfee;
    cout<<"Student added successful"<<endl;
    cout<<"**********************************************************************************************"<<endl;
}