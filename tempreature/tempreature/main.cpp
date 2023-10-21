//
//  main.cpp
//  tempreature
//
//  Created by Nisha Ramprasath on 21/10/23.
//

#include <iostream>

int main(){
    
    double temp;
    char unit;
    
    std::cout<<"**************temp converter ***********\n";
    std::cout<<"F=fahrenheight\n";
    std::cout<<"c=celsius\n";

    std::cout<<"what unit whould u like to convert:";
    std::cin>> unit;
    
    if(unit =='F' || unit == 'f'){
        std::cout<<"enter the temp in celsius";
        std::cin>>temp;
        
        temp=(1.8* temp)+32.0;
        std::cout<<"temp is:"<<temp<<"F\n";
        
    }
    
    
    
    else if(unit =='C' || unit == 'c'){
        std::cout<<"enter the temp in celsius";
        std::cin>>temp;
        
        temp=(temp-32)/1.8;
        std::cout<<"temp is:"<<temp<<"C\n";
        
    }
    else{
        std::cout<<"pls enter in onlu c or F\n";
    }
    
    std::cout<<"**************temp converter ***********\n";

    
    
}
