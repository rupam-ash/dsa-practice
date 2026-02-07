// ****
// ****
// ****
// ****

// #include<iostream>
// using namespace std;
// int main(){
//     for (int i = 0 ; i < 4 ; i++){
//         for (int j = 0 ; j < 4 ; j++){
//             cout <<"*" ;
//         }
//         cout << endl;
//     }
// }

// Taking input  

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <=n ; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Square pattern for the number and alphabet

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout << "Enter the number : ";
//     cin  >> n;
//     for (int i = 1 ; i<= n ; i ++){
//         for (int j = 1 ; j <= n ; j++){
//             cout << j;
//         }
//         cout <<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the Number : ";
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <=n ; j++ ){
            cout << (char)(j+64);
        }
        cout <<endl;
    }
}