#include<iostream>
int main()
{
    int Marks1=100,Marks2=98,Marks3=100,Marks4=97,Marks5=96,total,grade;
    float avg;
    std::cout<<"*STUDENT MARKS CARD*\n";
    std::cout<<"*CITY ENGINEERING COLLEGE*\n";
    std::cout<<"Name:kusuma\nBranch:ISE\nYear:2025\nSem:2\nCollege:City engineering college\n"<<std::endl;
    std::cout<<"Marks1:100\nMarks2:98\nMarks3:100\nMarks4:97\nMarks5:96\n"<<std::endl;
    total=Marks1+Marks2+Marks3+Marks4+Marks5;
    avg=(Marks1+Marks2+Marks3+Marks4+Marks5)/5;
    std::cout<<"\nTotal="<<total;
    std::cout<<"\nAverage="<<avg;
    if(avg>90)
        std::cout<<"\nGarde A";
        else if(avg>70)
        std::cout<<"\nGarde B";
        else
        std::cout<<"\nGrade C";
    return 0;


}