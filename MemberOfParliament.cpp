//
//  MemberOfParliament.cpp
//  
//
//  Created by Jonty Leslie on 27/10/21.
//

#include "MemberOfParliament.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

MemberOfParliament::MemberOfParliament(){
    
};

MemberOfParliament::MemberOfParliament(string n, string p, int l){
    name = n;
    position = p;
    yearsService = l;
};   // creates the parliament member name n,
                           // their position in parliament p, and number of years in service l

string MemberOfParliament::get_name(){
    return name;
};
void MemberOfParliament::set_name(string n){
    name = n;
    return;
};

string MemberOfParliament::get_position(){
    return position;
};
void MemberOfParliament::set_position(string p_position){
    position = p_position;
    return;
};

int MemberOfParliament::get_yearsService(){
    return yearsService;
};

void MemberOfParliament::set_yearsService(int years){
    yearsService = years;
    return;
};

bool isElectionYear(){
    return false;
}; // true if the representative has to run for election
