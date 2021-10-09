#include <iostream>

using namespace std;

int main() {

    const int N = 4;

    int arr[N];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    for (int* addr = addr; addr < addr + 4; addr++) {
        cout << *addr << endl;
    }

    for (char* addr =(char*)arr;                                    //     |
        addr < (((char*)arr + (SIZE_OF_ARRAY * sizeof(int)));       // - - | - -
        addr += sizeof(int)) {                                      //     |
        cout << *((int*)addr) << endl;                              //     |
    }                                                               //     |

    return 0;
}