// Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i <= n ; i++){
//         for (int j = 1 ; j <= n ; j++){
//             cout << i << " " ;
//         }
//         cout << endl;
//     }
// }
// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i <=  n ; i++){
//         for (int j = 1 ; j <= (n+1-i) ; j++){
//             cout << j << " " ;
//         }
//         cout << endl;
//     }
// }
// Print the following pattern
// Input: n = 4
// Output:
// A
// A B
// A B C
// A B C D
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i <=  n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             cout << (char)(64+j) << " " ;
//         }
//         cout << endl;
//     }
// }
// Print the following pattern
// Input: n = 4
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i <=  n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             if(i%2!=0){
//                 cout << j << " ";
//             }
//             else
//             cout << (char)(64+j) << " " ;
//         }
//         cout << endl;
//     }
// }
// Print the following pattern
// Input n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i <=  n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             cout << "*" << " " ;
//         }
//         cout << endl;
//     }
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= (n-i) ; j++){
//             cout << "*" << " " ;
//         }
//         cout << endl;}
//     }
// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******
// #include<iostream>
// using namespace std;
// int main(){
//     int m = 4 ,n = 6;
//     for (int i = 0; i < m; i++) {
//         if (i == 0 || i == m - 1) {
//             for (int j = 0; j < n; j++) {
//                 cout << "*";
//             }
//         } else {
//             cout << "*";
//             for (int j = 1; j < n - 1; j++) {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl; 
//     }
// }
// Print the following pattern
// Sample Input : n = 4
// Output :
//    ****
//   ****
//  ****
// ****
// #include<iostream>
// using namespace std;
// int main(){
//     int m = 4;
//     for(int i = 1;i <= m ; i++){
//         for (int j = 1; j<=(m-i); j++){
//             cout << "  ";
//         }
//     for(int k = 1 ;k <= m ; k++){
//         cout << "*";
//     }
//     cout << endl;
//     }
// }
// Print the following pattern
// Sample Input : n= 4
// Output :
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//  for(int i = 1;i <= n; i++){
//     for(int j = 1;j <= i; j++ ){
//     cout << j  <<" ";
//     }
//     cout <<endl;
//  }
// }
// Print the following pattern
// Input : n = 4
// Output :
//       A
//     A B
//   A B C
// A B C D
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//  for(int i = 1;i <= n; i++){
//     for(int j = 1;j <= (n+1-i) ; j++){
//         cout<< "  ";
//     }
//     for(int k = 1;k <= i; k++ ){
//     cout << (char)(64+k) <<" ";
//     }
//     cout <<endl;
//  }
// }
// Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//  for(int i = 1;i <= n; i++){
//     for(int k = i;k >= 1; k-- ){
//     cout << k <<" ";
//     }
//     cout <<endl;
//  }
// }
// Print the following pattern
// Input: n = 4
// Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i<= n ; i++ ){
//         for(int j = 1; j <= (n+1-i); j++){
//             cout << " ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout << "*";
//         }
//         cout <<endl;
//     }
//     for(int i = 1;i < n ; i++ ){
//         for(int j = 0; j <= i; j++){
//             cout << " ";
//         }
//         for(int j = 1; j <= (n-i); j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }