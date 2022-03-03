//
//  MemberOfParliament.hpp
//  
//
//  Created by Jonty Leslie on 27/10/21.
//

#ifndef MemberOfParliament_hpp
#define MemberOfParliament_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class MemberOfParliament{
        
    private:
        
    public:
    
    MemberOfParliament();
    MemberOfParliament(string n, string p, int l);   // creates the parliament member name n,
                                   // their position in parliament p, and number of years in service l
    
    string name;              // the name of the MemberOfParliament
    string position;          // the position of the MemberOfParliament
    int yearsService;         // the years of service in MemberOfParliament; takes only non-negative values
        string get_name();
        void set_name(string n);
        
        string get_position();
        void set_position(string p_position);
        
        int get_yearsService();
        void set_yearsService(int years);
        
        virtual bool isElectionYear() = 0; // true if the representative has to run for election
       // virtual ~MemberOfParliament();
    
};

#endif /* MemberOfParliament_hpp */
