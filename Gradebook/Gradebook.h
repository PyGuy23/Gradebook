//
//  Gradebook.h
//  Gradebook
//
//  Created by Calypso on 8/9/15.
//  Copyright (c) 2015 GradeBook. All rights reserved.
//

#ifndef Gradebook_Gradebook_h
#define Gradebook_Gradebook_h


#include<string>


class GradeBook{
    
public:
    explicit GradeBook(std::string);
    void setCourseName(std::string);
    std::string getCourseName()const;
    void displayMessage()const;
    void inputGrades();
    void displayGradeReport()const;
    
private:
    std::string courseName;
    unsigned int aGrade;
    unsigned int bGrade;
    unsigned int cGrade;
    unsigned int dGrade;
    unsigned int fGrade;
    
};

#endif
