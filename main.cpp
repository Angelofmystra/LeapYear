#include <iostream>

bool is_leap_year(signed year)
{
    bool ret = false;
    if(  ( year % 4 == 0 && year % 100 != 0 )
         ||
         ( year % 4 == 0 && year % 100 == 0 && year % 400 == 0 )
      ) ret = true;
    return ret;
}

int main(int argc, char* argv[])
{
    if( argc > 2 || argc < 2 ){ std::cerr << "Usage: " << argv[0] << " YEAR" << std::endl; return 1; }
    std::cout << is_leap_year( (int) argv[1] ); // unsafe
    return 0;
}
