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

//getting student detail function
void student_detail(){
    cout<<"Student name "<<name<<endl;
    cout<<"Student fathername "<<fathername<<endl;
    cout<<"Student Class "<<classs<<endl;
    cout<<"Student Roll number  "<<roll_no<<endl;
    cout<<"Student id "<<id<<endl;
    cout<<"Student Address "<<address<<endl;
    cout<<"**********************************************************************************************"<<endl;    
}
//remove student function
void student_remove(){
    name="";
    fathername="";
    address="";
    classs="";
    roll_no=0;
    id=0;
    totalfee=0;
    cout<<"Student deleted successful"<<endl;
    cout<<"**********************************************************************************************"<<endl;
}
};