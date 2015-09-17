//
//  main.c
//  Lighthouse Prep Section 2
//
//  Created by Adam Goldberg on 2015-09-12.
//  Copyright (c) 2015 Adam Goldberg. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    for (int x = 1; x < 101; x++)
        
    {
        if ((x % 3 == 0) && (x % 5 ==0))
            printf ("FizzBuzz\n");
        else if (x % 3 == 0)
            printf ("Fizz\n");
        else if (x % 5 == 0)
            printf ("Buzz\n");
        else
            printf ("%d\n", x);
    
        
    }
    return 0;
}

//I'm adding comments to see if Git notices my changes

//Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz"
