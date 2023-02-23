#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int rollno;
    char dob[20];
    char Department[20];
};
int main()
{
    int n;
    cout<< "Enter the number of student:"<<endl;
    cin>>n;
    struct student stu[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter name:"<<endl;
        cin>>stu[i].name;
        cout<<"Enter rollno:"<<endl;
        cin>>stu[i].rollno;
        cout<<"Enter dob:"<<endl;
        cin>>stu[i].dob;
        cout<<"Enter Department:"<<endl;
        cin>>stu[i].Department;
    }
    cout<<"Details of the students are as follows"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Name of student"<<i+1<<":"<<stu[i].name<<endl;
                cout<<"rollno of student"<<i+1<<":"<<stu[i].rollno<<endl;
        cout<<"dob of student"<<i+1<<":"<<stu[i].dob<<endl;
                cout<<"Department of student"<<i+1<<":"<<stu[i].Department<<endl;

    }
    return 0;
}
    
