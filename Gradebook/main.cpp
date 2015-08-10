//
//  main.cpp
//  Gradebook
//
//  Created by Calypso on 8/9/15.
//  Copyright (c) 2015 GradeBook. All rights reserved.
//

#include <iostream>
#include "Gradebook.h"


int main()
{
    GradeBook gBook("C++ programming with Timothy Hosey");
    gBook.displayMessage();
    gBook.inputGrades();
    gBook.displayGradeReport();
    
    
    
}
