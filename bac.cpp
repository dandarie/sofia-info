#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, k = 0, prev, found = 0;
        
    ifstream fin ("bac.txt");
    
    fin >> x;
    
    while (fin >> x) {
        
        
        if(x == prev) {
            
            k++;
            
        } else {
            
            if(k == 1) {
                cout << prev << " ";
                found = 1;
            }
            
            k = 0;
        }
        
        prev = x;
    }
    
    if(k == 1) {
        cout << prev << " ";
        found = 1;
    }
    
    if(found == 0) {
        cout << "nu exista";
    }
    
    return 0;
}
