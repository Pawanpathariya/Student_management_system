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


//fees class 
class Fees:public Student{
   protected:
   int pay;
   int remaining=totalfee;
   int sid;
  public:
    //pay fees function
   void pay_fee(){
    cout<<"Enter id ";
    cin>>sid;
    if(id==sid){ 
    cout<<"Student name "<<name<<endl;    
    cout<<"Enter amount you want to pay :";
    cin>>pay;
    remaining=totalfee-pay;
    cout<<"Your remaining fees is : "<<remaining<<endl;
    }
    else{
        cout<<"No student id available "<<endl;
    }
    cout<<"**********************************************************************************************"<<endl;
  }
  //check fees function
   void fee_check(){
    cout<<"Your remaining fee from "<<totalfee<<" is "<<remaining<<endl;
    cout<<"**********************************************************************************************"<<endl;
   }
};

//Grades and marks class 
class Grades : public Fees{
protected:
int math,english,hindi,physics,chemistry;
public:
//update marks function
void update_marks(){
    cout<<"Enter maths marks ";
    cin>>math;
    cout<<"Enter english marks ";
    cin>>english;
    cout<<"Enter hindi marks ";
    cin>>hindi;
    cout<<"Enter physics marks ";
    cin>>physics;
    cout<<"Enter chemistry marks ";
    cin>>chemistry;
    cout<<"Marks updated successful"<<endl;
    cout<<"**********************************************************************************************"<<endl;
}
//display grades function
void display_grade_marks(){
    cout<<"Math marks :"<<math<<endl;
    cout<<"english marks :"<<english<<endl;
    cout<<"hindi marks :"<<hindi<<endl;
    cout<<"physics marks :"<<physics<<endl;
    cout<<"chemistry marks :"<<chemistry<<endl;
    int total=math+english+hindi+physics+chemistry;
    cout<<"Total percentage "<<total/5.0<<endl;
    cout<<"**********************************************************************************************"<<endl;
}
};

int main(){
  Grades st;
  int op;
  while (true){
    cout<<"Enter 1 for Add Student "<<endl;
    cout<<"Enter 2 for Display Student Detail "<<endl;
    cout<<"Enter 3 for Remove Student "<<endl;
    cout<<"Enter 4 for Pay Student fees "<<endl;
    cout<<"Enter 5 for View Student fees "<<endl;
    cout<<"Enter 6 for Updating Student Marks "<<endl;
    cout<<"Enter 7 for View Student Marks "<<endl;
    cout<<"Enter 8 for Exit "<<endl;
    cin>>op;
    switch (op){
    case 1:
        st.add_student();
        break;
    case 2:
        st.student_detail();
        break;
    case 3:
        st.student_remove();
        break;
    case 4:
        st.pay_fee();
        break;
    case 5:
        st.fee_check();
        break;
    case 6:
        st.update_marks();
        break;        
    case 7:
        st.display_grade_marks();
        break;
    }
    if(op==8){
        break;
    }
  }  
}