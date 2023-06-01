
// Array




// One dimensional array or 1-D array.

// Write a program in c++ to accept 1-D array element and display this.

// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[5], i;
//    cout<<"Enter array values \n";
//    for(i=0; i<5; i++){
//     cin>>arr[i];
//    }
//    cout<<"\n The values is = \n";
//    for(i=0; i<5; i++){
//         cout<<arr[i]<<"\t";
//    }
//    return 0;
// }

// Write a program in c++ to accept 2-D array element and display this.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10][10], i, j;
//     cout << "Enter first array element : \n";
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "\n Displaying first array element : \n";
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << "\t";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// Write a program to find the the sum of matrix 2x2 matrix.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5][5],b[5][5], sum[5][5], i, j;
//     cout<<"Enter first array element : \n";
//     for(i=0; i<2; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     cout<<"\nDisplaying first array element : \n";
//     for(i=0; i<2; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             cout<<a[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
//       cout<<"\nEnter second array element : \n";
//     for(i=0; i<2; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             cin>>b[i][j];
//         }
//     }
//     cout<<"\nDisplaying second array element : \n";
//     for(i=0; i<2; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             cout<<b[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
//     cout<<"\nThe sum of array element : \n";
//     for(i=0; i<2; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             sum[i][j]=a[i][j]+b[i][j];
//             cout<<sum[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
//    return 0;
// }

// Write a program to find the multiplication of array element .

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5][5], b[5][5], mult[5][5], i, j, t;
//     cout << "Enter first array element : \n";
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << "\nDisplaying first array element : \n";
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << "\n";
//     }
//     cout << "\nEnter second array element : \n";
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             cin >> b[i][j];
//         }
//     }
//     cout << "\nDisplaying second array element : \n";
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             cout << b[i][j] << "\t";
//         }
//         cout << "\n";
//     }
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             mult[i][j] = 0;
//             for (t = 0; t < 2; t++)
//             {
//                 mult[i][j] = mult[i][j] + a[i][t] * b[t][j];
//             }
//         }
//     }
//     cout << "\nThe multplication of array element : \n";
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             cout << mult[i][j] << "\t";
//         }
//         cout << "\n";
//     }
//     return 0;
// }













