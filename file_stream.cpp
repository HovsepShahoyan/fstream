#include <iostream>
#include <fstream>

int main() {
    std::ifstream fin ;
    fin.open("chlp.txt");
    if ( fin.is_open()) {
       // while (!fin.eof()){ // till the end of file 
          //  char ch ;
        //ch = fin.get() ;
            //std::cout << ch << std::endl ; // it prints each character of text file
            //std::string str ; 
         //   getline ( fin , str , 'k');
           // std::cout << str << std::endl ;   // untill reach to k , till the end
        //}
        int a ;         // if it can find int value between whitespace to whitespace
        fin >> a ;
        std::cout << a << std::endl ;
        double b ;
        fin >> b ;
        std::cout << b << std::endl ;
        int c ;
        fin >> c ;
        int d ;  // it will try to fine some number after last whitspace and it will reach 'f' which is not number so it will print 0
        fin >> d ;
        std::cout << c << std::endl ;
        std::cout << d << std::endl ;
    }

    fin.close();
}