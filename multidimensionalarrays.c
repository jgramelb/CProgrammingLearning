
/* Multidimensional arrays

Rows and Columns
Think matrix
Visualize as a table

Example: Array 4 rows and 5 columns
int matrix[4][5];

Example: Array of numbers
int numbers[3][4] = {
    {10,20,30,40},
    {15,25,35,45},
    {47,48,49,50}
};

Not required that the whole array be initialized
Example:
int numbers[4][5] = {
    {10,5,-3},
    {9,0,0},
    {32,20,1},
    {0,0,8}
};

Designated initializers

int matrix[4][3] ={[0][0]=1, [1][1]=5, [2][2]=9};

*/
/*Declaring 3 dimensional array:
int box[10][20][30];

Visualize one dim array as row of data
Visualize two dimensional array as table of data, matrix, or spreadsheet
Visualize a three dimensional array as stack of data tables.

    Typically you would use 3 nested loops to process a three dimensional array
    4 nested loops to process a four dimensional array , and so on
*/
/*Initializing array of more than 2 dimensions

int numbers[2][3][4]={
    {//First block of three rows
        {10,20,30,40},
        {15,25,35,45},
        {47,48,49,50}
    },

    {//Second block of three rows
        {10,20,30,40},
        {15,25,35,45},
        {47,48,49,50}
    },

};

*/


/*Processing elements in a n dimensional array

int sum = 0;
for (int i = 0; i<2; ++i)
{
for (int j = 0; j<3; ++j)
{
for (int k = 0; k < 4; ++k)
{
sum += numbers[i][j][k];
}
*/
