// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 0
// Program: CS213-2018-A1-T1-P0
// Purpose: Skeleton code for the student to start working
// Author: Salma Essam Soliman          ID: 20170115
//         shrouq hussein hussein       ID: 20170127
//         Shereen Hassan Mohammed      ID: 20170130
// Version: 1.0

#include <iostream>
#include <cassert>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

// A structure to store a matrix
struct matrix
{

    int ** data;        // Pointer to 2-D array that will simulate matrix
    int row,col;

};

///Student #3 with the biggest ID
ostream& operator<< (ostream& out, matrix& mat);     // Print matrix  as follows (2 x 3)   4  6    8
                                                    // and return ostream to cascade printing 9 12   123

///Student #2 with the middle ID
istream& operator>> (istream& in, matrix& mat);     // Input matrix like this (dim 2 x 3) cin >> 2 3 4 6 8 9 12 123
                                                    // and return istream to allow cascading input

// Already implemented
void createMatrix (int row, int col, int num[], matrix& mat3);     //Requires row,column,array of the data to create a new matrix

/// Student #1 with the smallest ID
// All these operations return a new matrix with the calculation result

matrix operator + (matrix mat1,matrix mat2);    //return new matrix with the sum of the two old matrices M1 + M2
// Add if same dimensions

matrix operator - (matrix mat1,matrix mat2);    //return new matrix with the difference of the two old matrices M1 - M2
// Sub if same dimensions

matrix operator * (matrix mat1,matrix mat2);    //return new matrix with the multiplication of the two matrices M1 * M2
// Multi if col1 == row2

matrix operator + (matrix mat1, int scalar);    //return new matrix after adding an integer to the old matrix M1 + N
// Add a scalar

matrix operator - (matrix mat1, int scalar);    //return new matrix after subtracting an integer from the old matrix M1 - N
// Subtract a scalar

matrix operator * (matrix mat1, int scalar);    //return new matrix after multiplying an integer by the old matrix M1 *N
// Multiple by scalar

///Student #2 with the middle ID
// The last operator >> takes an istream and a matrix and return the
// the same istream so it is possible to cascade input like
// cin >> matrix1 >> matrix2 << endl;

matrix operator+= (matrix& mat1, matrix mat2);    // mat1 changes & return
                                                // new matrix with the sum

matrix operator-= (matrix& mat1, matrix mat2);  // mat1 changes + return new
                                                // matrix with difference

matrix operator+= (matrix& mat, int scalar);   // change mat & return new matrix

matrix operator-= (matrix& mat, int scalar);   // change mat & return new matrix

matrix& operator++ (matrix& mat);   	    // Add 1 to each element ++mat

matrix& operator-- (matrix& mat);    	    // Sub 1 from each element --mat

///Student #3 with the biggest ID
// The first operator << takes an ostream and a matrix and return the
// the same ostream so it is possible to cascade output like
// cout << matrix1 << matrix2 << endl;

bool   operator== (matrix mat1, matrix mat2);	// True if identical

bool   operator!= (matrix mat1, matrix mat2); 	// True if not same

bool   isSquare(matrix mat);    // True if square matrix

bool   isSymetric(matrix mat);      // True if square and symmetric

bool   isIdentity(matrix mat);      // True if square and identity

matrix transpose(matrix mat);    // Return new matrix with the transpose


int main()
{

    cout<<"----------------------------------------------------------------\n";
    cout<<"Ahlan Ya User Ya Habibi :D\n";
    cout<<"What do you like to do today?\n\n";
    cout<<"----------------------------------------------------------------\n";
    cout<<"1-Add 2 matrices (M1 + M2).\n2-Subtract 2 matrices (M1 - M2).\n3-Multiply 2 matrices (M1 * M2).\n";
    cout<<"4-Add an integer to a matrix (M1 + N).\n5-Subtract an integer from a matrix (M1 - N).\n";
    cout<<"6-Multiply an integer with a matrix (M1 * N).\n7-Add 2 matrices putting the result in the first matrix (M1 += M2).\n";
    cout<<"8-Subtract 2 matrices putting the result in the first matrix (M1 -= M2).\n";
    cout<<"9-Add an integer to a matrix putting the result in the first matrix (M1 += N).\n";
    cout<<"10-Subtract an integer from a matrix putting the result in the first matrix (M1 -= N).\n";
    cout<<"11-Add 1 to each element in the matrix ( M1++ ).\n12-Subtract 1 from each element in the matrix ( M1-- ).\n";
    cout<<"13-See if the 2 matrices are identical.\n14-See if the 2 matrices are not the same.\n";
    cout<<"15-See if the matrix is a square matrix.\n16-See if the matrix is symmetric.\n";
    cout<<"17-See if the matrix is an identity matrix.\n18-Get the transpose of the matrix.\n\n";
    cout<<"----------------------------------------------------------------\n";
    cout<<"Please enter your choice: ";

    string choice ;

    cin>>choice;
    cout<<endl;

    matrix mat1,mat2,mat3 ;
    int scalar;

    while(choice!="1"&&choice!="2"&&choice!="3"&&choice!="4"&&choice!="5"&&choice!="6"
          &&choice!="7"&&choice!="8"&&choice!="9"&&choice!="10"&&choice!="11"&&choice!="12"
          &&choice!="13"&&choice!="14"&&choice!="15"&&choice!="16"&&choice!="17"&&choice!="18")
    {
        cout<<"Please enter a valid input: ";
        cin>>choice;
        cout<<endl;
    }

    if(choice=="1")
    {
        cin>>mat1>>mat2;
        mat3=mat1+mat2;
        cout<<mat3;

    }

    else if(choice=="2")
    {
        cin>>mat1>>mat2;
        mat3=mat1-mat2;
        cout<<mat3;

    }

    else if(choice=="3")
    {
        cin>>mat1>>mat2;
        mat3=mat1*mat2;
        cout<<mat3;

    }

    else if(choice=="4")
    {
        cin>>mat1;
        cout<<"Enter an integer to continue: ";
        cin>>scalar;
        mat3=mat1+scalar;
        cout<<"\nYour new matrix is :\n"<<mat3;

    }

    else if(choice=="5")
    {

        cin>>mat1;
        cout<<"Enter an integer to continue: ";
        cin>>scalar;
        mat3=mat1-scalar;
        cout<<"\nYour new matrix is :\n"<<mat3;

    }

    else if(choice=="6")
    {
        cin>>mat1;
        cout<<"Enter an integer to continue: ";
        cin>>scalar;
        mat3=mat1*scalar;
        cout<<"\nYour new matrix is :\n"<<mat3;

    }
    else if(choice=="7")
    {
        cin>>mat1>>mat2;
        mat1+=mat2;
        cout<<"\nYour new matrix is :\n"<<mat1;

    }
    else if(choice=="8")
    {
        cin>>mat1>>mat2;
        mat1-=mat2;
        cout<<"\nYour new matrix is :\n"<<mat1;

    }
    else if(choice=="9")
    {
        cin>>mat1;
        cout<<"Enter an integer to continue: ";
        cin>>scalar;
        mat1+=scalar;
        cout<<"\nYour new matrix is :\n"<<mat1;

    }
    else if(choice=="10")
    {
        cin>>mat1;
        cout<<"Enter an integer to continue: ";
        cin>>scalar;
        mat1-=scalar;
        cout<<"\nYour new matrix is :\n"<<mat1;

    }
    else if(choice=="11")
    {
        cin>>mat1;
        ++mat1;
        cout<<"\nYour new matrix is :\n"<<mat1;

    }
    else if(choice=="12")
    {
        cin>>mat1;
        --mat1;
        cout<<"\nYour new matrix is :\n"<<mat1;

    }
    else if(choice=="13")
    {
        cin>>mat1>>mat2;
        if(mat1==mat2)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }

    }
    else if(choice=="14")
    {
        cin>>mat1>>mat2;
        if(mat1!=mat2)
        {
            cout<<" (True)"<<endl;
        }
        else
        {
            cout<<" (False)"<<endl;
        }

    }
    else if(choice=="15")
    {
        cin>>mat1;
        if(isSquare(mat1))
        {
            cout<<" (True)"<<endl;
        }
        else
        {
            cout<<" (False)"<<endl;
        }

    }
    else if(choice=="16")
    {
        cin>>mat1;
        if(isSymetric(mat1))
        {
            cout<<" (True)"<<endl;
        }
        else
        {
            cout<<" (False)"<<endl;
        }

    }
    else if(choice=="17")
    {
        cin>>mat1;
        if(isIdentity(mat1))
        {
            cout<<" (True)"<<endl;
        }
        else
        {
            cout<<" (False)"<<endl;
        }

    }
    else if(choice=="18")
    {
        cin>>mat1;
        mat3=transpose(mat1);
        cout<<mat3;

    }

    for(int i=0; i<mat1.row; i++)
    {
        delete[]mat1.data[i];
        delete[]mat2.data[i];
        delete[]mat3.data[i];

    }
    cout<<"\nThank you for using this program.\n";
    cout<<"----------------------------------------------------------------\n";

    return 0;
}
ostream& operator<< (ostream& out, matrix& mat)
{
    for (int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            out<<mat.data[i][j]<<"  ";
        }
        out<<endl;
    }

    return out;
}

istream& operator>> (istream& in, matrix& mat)
{
    cout<<"Enter the number of rows:";
    cin>>mat.row;
    cout<<"Enter the number of columns:";
    cin>>mat.col;
    cout<<"Enter th elements of the matrix:\n";
    mat.data = new int* [mat.row];
    for(int i=0; i<mat.row; i++)
    {
        mat.data[i] = new int [mat.col];
        for(int j=0; j<mat.col; j++)
        {
            cin>>mat.data[i][j];
        }
    }



    return in;

}

void createMatrix (int row, int col, int num[], matrix& mat3)
{
    mat3.row = row;
    mat3.col = col;
    mat3.data = new int* [row];

    for (int i = 0; i < row; i++)
        mat3.data[i] = new int [col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat3.data[i][j] = num[i * col + j];
        }
    }
}
matrix operator + (matrix mat1,matrix mat2)
{
    if(mat1.row==mat2.row&&mat2.col==mat1.col)
    {
        matrix mat3;
        int num[mat1.row*mat1.col]= {};
        for(int i=0; i<mat1.row; i++)
        {
            for(int j=0; j<mat1.col; j++)
            {
                num[i * mat1.col + j]=(mat1.data[i][j]+mat2.data[i][j]);
            }
        }
        createMatrix(mat1.row,mat1.col,num,mat3);
        cout<<"\nYour new matrix is :\n";

        return mat3;
    }
    else
    {
        cout<<"Can't sum in this case.\n";
    }

}
matrix operator - (matrix mat1,matrix mat2)
{
    if(mat1.row==mat2.row&&mat2.col==mat1.col)
    {
        matrix mat3;
        int num[mat1.row*mat1.col]= {};
        for(int i=0; i<mat1.row; i++)
        {
            for(int j=0; j<mat1.col; j++)
            {
                num[i * mat1.col + j]=(mat1.data[i][j]-mat2.data[i][j]);
            }
        }
        createMatrix(mat1.row,mat1.col,num,mat3);
        cout<<"\nYour new matrix is :\n";

        return mat3;
    }
    else
    {
        cout<<"Can't subtract in this case.\n";
    }

}
matrix operator * (matrix mat1,matrix mat2)
{
    if(mat1.col==mat2.row)
    {
        matrix mat3;
        int num[mat1.row*mat1.col]= {};
        for(int i=0; i<mat1.row; i++)
        {
            for(int j=0; j<mat1.col; j++)
            {
                num[i * mat1.col + j]=(mat1.data[i][j]*mat2.data[i][j]);
            }
        }
        createMatrix(mat1.row,mat1.col,num,mat3);
        cout<<"\nYour new matrix is :\n";

        return mat3;
    }
    else
    {
        cout<<"Can't multiply in this case.\n";
    }

}

matrix operator + (matrix mat1, int scalar)
{
    matrix mat3;
    int num[mat1.row*mat1.col]= {};
    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {
            num[i * mat1.col + j]=(mat1.data[i][j]+scalar);
        }
    }
    createMatrix(mat1.row,mat1.col,num,mat3);

    return mat3;

}

matrix operator - (matrix mat1, int scalar)
{
    matrix mat3;
    int num[mat1.row*mat1.col]= {};
    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {
            num[i * mat1.col + j]=(mat1.data[i][j]-scalar);
        }
    }
    createMatrix(mat1.row,mat1.col,num,mat3);

    return mat3;

}
matrix operator * (matrix mat1, int scalar)
{
    matrix mat3;
    int num[mat1.row*mat1.col]= {};
    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {
            num[i * mat1.col + j]=(mat1.data[i][j]*scalar);
        }
    }
    createMatrix(mat1.row,mat1.col,num,mat3);

    return mat3;

}

///overloading += operator to deal with matrix
matrix operator+= (matrix& mat1, matrix mat2)
{


    assert((mat1.row==mat2.row)&&(mat1.col==mat2.col));

    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {

            mat1.data[i][j]=(mat1.data[i][j])+ mat2.data[i][j];
        }
    }
    return mat1;
}

///overloading -= operator to deal with matrix
matrix operator-= (matrix& mat1, matrix mat2)
{


    assert((mat1.row==mat2.row)&&(mat1.col==mat2.col));

    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {

            mat1.data[i][j]=(mat1.data[i][j])- mat2.data[i][j];
        }
    }
    return mat1;
}

///overloading ++( prefix ) operator to deal with matrix
matrix& operator++ (matrix& mat)
{

    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {

            mat.data[i][j]++;
        }
    }
    return mat;
}


///overloading --( prefix ) operator to deal with matrix
matrix& operator--(matrix& mat)
{


    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {

            mat.data[i][j]--;
        }



    }
    return mat;
}

///overloading += operator to add an integer to matrix
matrix operator += (matrix& mat, int scalar)
{

    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {

            mat.data[i][j]=(mat.data[i][j]+scalar);
        }
    }
    return mat;

}


///overloading -= operator to subtruct an integer from matrix
matrix operator-= (matrix& mat, int scalar)
{

    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {

            mat.data[i][j]=(mat.data[i][j]-scalar);
        }
    }
    return mat;

}

bool   operator== (matrix mat1, matrix mat2)
{

    if (mat1.row == mat2.row && mat1.col == mat2.col)
    {
        for (int i = 0; i < mat1.row; i++)
        {
            for (int j = 0; j < mat1.col; j++)
            {
                if (mat1.data[i][j] != mat2.data[i][j] )
                {
                    return false;
                }

            }
        }
        cout << endl << "Return value of == : ";
        return true;
    }
    else
    {
        cout << endl << "Return value of == : ";
        return false;
    }
}

bool   operator!= (matrix mat1, matrix mat2)
{
    bool flag = true;
    if (mat1.row == mat2.row && mat1.col == mat2.col)
    {
        for (int i = 0; i < mat1.row; i++)
        {
            for (int j = 0; j < mat1.col; j++)
            {
                if (mat1.data[i][j] != mat2.data[i][j])
                {
                    cout << endl << "Return value of != : ";
                    return true;
                }

            }
        }
        cout << endl << "Return value of != : ";
        return false;
    }
    else
    {
        cout << endl << "Return value of != : ";
        return true;
    }
}

bool   isSquare(matrix mat)
{
    if (mat.row == mat.col)
    {

        return true;

    }
    else
    {

        return false;

    }
}

bool   isSymetric(matrix mat)
{
    if (isSquare(mat))
    {
        return true;
    }
    else
    {
        cout << "Matrix should be square matrix \n";
        return false;
    }
    if (mat == transpose(mat))
    {
        cout << "Symmetry result is : ";
        return true;
        cout << "/n/n";
    }
    ;
}

bool   isIdentity(matrix mat)
{
    int counter = 0;
    if (isSquare(mat))
    {
        for (int i = 0; i < mat.row; i++)
        {
            for (int j = 0; j < mat.col; j++)
            {
                if (i == j && mat.data[i][j] == 1)
                {
                    counter++;
                }
                else if (i != j && mat.data[i][j] == 0)
                {
                    counter++;
                }
                else
                {
                    cout << "\n not identity \n ";
                    return false;
                }
                if (counter == (mat.row*mat.col))
                {
                    cout << "\n identity matrix \n ";
                    return true;
                }
            }
        }

    }
    else
    {
        cout << "Matrix should be square";
        return false;
    }
}


matrix transpose(matrix mat)
{

    matrix trp;
    const int MAX = 100;
    int arr[MAX] = {0};
    createMatrix(mat.row, mat.col, arr, trp);

    for (int i = 0; i < mat.row; i++)
    {
        for (int j = 0; j < mat.col; j++)
        {

            trp.data[j][i] = mat.data[i][j];

        }

    }

    return trp;
}

