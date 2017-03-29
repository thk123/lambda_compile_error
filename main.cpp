#include <iostream>
#include <memory>


int main()
{
   std::cout << "Hello World" << std::endl; 
   
   typedef std::shared_ptr<const int> const_pointert;
   
   auto lambda = [&](const int &expr) {
        const_pointert x(new int);
        const const_pointert y(new int);
        if(expr > 4)
        {
            return x;
        }
        else
        {
            return y;
        }
   };
   
   const_pointert retx = lambda(5);
   const_pointert rety = lambda(3);
}
