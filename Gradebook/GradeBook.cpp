//
//  GradeBook.cpp
//  Gradebook
//
//  Created by Calypso on 8/9/15.
//  Copyright (c) 2015 GradeBook. All rights reserved.
//

#include <stdio.h>
#include "Gradebook.h"
#include <iostream>

using namespace std;

GradeBook::GradeBook(string name) : aGrade(0),
                                    bGrade(0),
                                    cGrade(0),
                                    dGrade(0),
                                    fGrade(0)
{
    setCourseName(name);
    
    
}

void GradeBook::setCourseName(string name)
{
    if(name.size() <= 25)
        courseName = name;
        
        else
        {
            courseName = name.substr(0, 25);
            cerr<< "Name \"" <<name <<  "\" exceeds maximum length (25).\n"
            <<"Limiting courseName to first 25 characters.\n" <<endl;
        
        }
        
        
}
  
    
   
    
    


string GradeBook::getCourseName()const
{
    return courseName;
}



void GradeBook::displayMessage()const
{
    cout<<"Welcome to to the grade book for \n"<< getCourseName()<<"!\n"
    <<endl;
}



void GradeBook::inputGrades()
{
    int grade;
    
    cout<<"Enter the student's grades."<<endl
    <<"Enter the EOF character to end input." <<endl;
    
    while((grade = cin.get())!= EOF)
    {
        switch(grade)
        {
            case 'A':
            case 'a':
                ++aGrade;
                break;
            case 'B':
            case 'b':
                ++bGrade;
                break;
            case 'C':
            case 'c':
                ++cGrade;
                break;
            case 'D':
            case 'd':
                ++dGrade;
                break;
            case 'F':
            case 'f':
                ++fGrade;
                break;
                
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                
                cout<<"Incorrect letter grade entered."
                <<"Enter a new grade."<<endl;
                
                break;
                
                
        }
    }
}

void GradeBook::displayGradeReport()const
{
        cout<<"\n\nNumber of students who received each letter grade:"
            <<"\nA: " << aGrade
            <<"\nB: " << bGrade
            <<"\nC: " << cGrade
            <<"\nD: " << dGrade
            <<"\nF: " << fGrade
            <<endl;
}



