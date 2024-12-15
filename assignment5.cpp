// Print all the odd numbers from 1 to 100.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i<=100 ; i++){
//     cout << i << endl;
//     i = i+1;
// }}
// Print all numbers from 1 to 100 that are divisible by 3
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 3; i<=100 ; i++){
//     cout << i << endl;
//     i = i+3;
// }}
// Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the integer for Table :";
//     cin >> n;
//     for(int i = 1;i<=10;i++){
//         cout << i*n <<endl ;
//     }}
// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;
//     for(int i = 1;i<=n;i++){
//         cout << i <<endl ;
//         i = i+2;
//     }}
// Display this GP - 3,12,48,.. upto ‘n’ terms.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;
//     int i = 3;
//     while(i<=n){
//      cout << i << endl;
//      i = i*4;
//     }}
// Write a program to print all the ASCII values and their 
// equivalent characters of 26 alphabets using a while loop.
#include<iostream>
using namespace std;
int main(){
    int i = 65;
    while(i<=90){
        cout << (char)i << " " ;
        i++;
}}
