/*
Data structure:- is a logical model of a particular organization of data. 
It is a representation of information in primary of disk storage area.
The data structures can contain any of these datatypes:-
*/

// Q.1 Program for insertion operation in array.

// #include <iostream>
// using namespace std;
// int main()
// {
//     const int size = 5;
//     int list[size], i, pos, ele;
//     cout << "\n Enter 5 element in array \n";
//     for (i = 0; i < size; i++)
//     {
//         cin >> list[i];
//     }
//     cout << "\n Displaying array elements before insertion new element\n";
//     for (i = 0; i < size; i++)
//     {
//         cout << list[i] << "\t";
//     }
//     cout << "\n Enter new element to insert \n";
//     cin >> ele;
//     cout << "\n Enter position to insertion \n";
//     cin >> pos;
//     if (pos > size)
//     {
//         cout << "Not Possible";
//     }
//     else
//     {
//         // for(i=(size-1); i>=size; i--){
//         //     list[i+1]=list[i];
//         // }
//         i = size - 1;
//         while (i >= size)
//         {
//             list[i + 1] = list[i];
//             i=i-1;
//         }
//         list[pos] = ele;
//     }
//     if (pos < size)
//     {
//         cout << "\n Again display array elements after inserting new element \n";
//         for (i = 0; i < size; i++)
//         {
//             cout << list[i] << "\t";
//         }
//     }
//     return 0;
// }

// Insertion Operation in Array in Data Structures

// #include<iostream>
// using namespace std;
// void display(int arr[], int n){
//     // Code for Traversal
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
// }
// int indInsertion(int arr[], int size, int ele, int cap, int index){
//     // code for insertion 
//     if(size>=cap){
//         return -1;
//     }
//     for(int i=size-1; i>=index; i--){
//         arr[i+1]=arr[i];
//     }
//     arr[index]=ele;
//     return 1;
// }
// int main()
// {
//     int arr[100]={12, 13, 14, 15, 16};
//     int size=5, ele=45, index=3;
//     display(arr, size);
//     indInsertion(arr, size, ele, 100, index);
//     size+=1;
//     display(arr, size);
//     return 0;
// }

























