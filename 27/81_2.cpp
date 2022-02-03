#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int chet17_1 = 0, chet17_2 = 0, chet = 0;
    int nech17_1 = 0, nech17_2 = 0, nech = 0;
    for (int i= 0; i < n; ++i){
        int x; cin >> x;
        if (x % 17){
            if (x % 2){
                if (x > nech){nech = x;}
            }
            else{
                if (x > chet) {chet = x;}
            }
        }
        else{
            if (x % 2){
                if (x > nech17_1){nech17_2 = nech17_1; nech17_1 = x;}
                else{
                    if (x > nech17_2){nech17_2 = x;}
                }
            }
            else{
                if (x > chet17_1){chet17_2 = chet17_1; chet17_1 = x;}
                else{
                    if (x > chet17_2){chet17_2 = x;}
                }
            }
    }
    }
    int c1 = chet17_1, c2, n1 = nech17_1, n2;
    if(chet17_2 >= chet){c2 = chet17_2; } else{c2 = chet;}
    if(nech17_2 >= nech){n2 = nech17_2; } else{n2 = nech;}
    if((c1 + c2 >=  n1 + n2) && c1 && c2){ cout << c1 <<" " << c2;}
    else{
            if(n1 && n2){ cout << n1 <<" " << n2;}
            else { cout << 0 <<" " << 0;}

            }


    return 0;
}