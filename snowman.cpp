#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

namespace ariel{
    string hat[4]={" _===_\n","  ___\n .....\n","   _\n  /_\\\n", "  ___\n (_*_)\n"};
    
    string nose[4]={",",".","_", " "};
    string leftEye[4] ={"(.","(o","(O","(-"};
    string rightEye[4] ={".)","o)","O)","-)"};
    
    string Larm[4] ={"<","\\","/"," "};
    string Rarm[4] ={">\n","/\n","\\\n","\n"};
    string torso[4]={"( : )","(] [)","(> <)","(   )"};
    
    string base[4]={" ( : )"," (\" \")"," (___)"," (   )"};
        bool RArmUp;
        bool LArmUp;


    string buildSwon(int x)
    {
        //build the snowman
        string s="";
        s=s+hat[(x/10000000)-1];
        if(LArmUp) 
        {
            s=s+Larm[1];
        }
        else{
            s=s+" ";
        }
        s=s+leftEye[((x/100000)%10)-1];
        s=s+nose[((x/1000000)%10)-1];
        s=s+rightEye[((x/10000)%10)-1];
        if(RArmUp)
        {
            s=s+Rarm[1];
        }
        else{
            s=s+"\n";
        }
        if(!LArmUp)
        {
            s=s+Larm[((x/1000)%10)-1];
        }
        else{// add " " before the torso
            s=s+" ";
        }
        s=s+torso[((x/10)%10)-1];
        if(!RArmUp)
        {
            s=s+Rarm[((x/100)%10)-1];
        }
        else
        {
            s=s+"\n";
        }
        s=s+base[(x%10)-1];
        return s;
    }

    string snowman(int x)
    {
        string s="";
        int temp=x;
        
        //check if the input is valid
        for(int i=0;i<8;i++)
        {
            if(temp%10>4||temp%10<1)
            {
                throw exception();
            }
            temp=temp/10;
        }
        if(temp!=0)
        {
            throw exception();
        }


        //check if the arm is up or down
        RArmUp=false;
        LArmUp=false;
        if((x/100)%10==2) //2 is arm up
        {
            RArmUp=true;
        }
         if((x/1000)%10==2)
        {
            LArmUp=true;
        }
        
        s = buildSwon(x);
        return s;
        
    }
}