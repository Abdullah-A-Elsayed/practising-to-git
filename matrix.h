#ifndef MAT_H

#define MAT_H
#include <string>
#include <map>
#include <vector>
using namespace std;
class matrix {
    //setup:
private:
    int num_rows;
    int num_columns;
    vector< vector<double> > values; //2d dynamic array of double using vector class
		// calculate determine func
	double cal_determin_sq(int num_rows); //bad
	matrix inverse_2(); //fast
	// calculate co-factor func
	matrix cal_cofactor(int num_rows); //needed to calculate inverse ,bad
	// find transpose func
    matrix transpose(matrix& fac, double r); //bad
	int check_zero_dete(); //bad
	int is_identify(double n);
public:
    matrix();
    matrix(string values);
    void initialize(int rows, int cols); 
	
    int get_num_rows (){ return this->num_rows;}
    int get_num_columns (){  return this->num_columns; }
    void print_matrix();
    // tasks:
	double determinant_2(int n); // good fast
    void fill_matrix (string data);
	void fill_matrix_adv(string data,map<const string, matrix> matrices);
    matrix add_matrix( matrix& m);
    matrix sub_matrix( matrix& m);
    matrix mult_matrix( matrix& m);
    matrix inverse_matrix();  //you can use it as it calls the good one
    matrix transpose_matrix();
    matrix div_matrix( matrix& m); 
	matrix bitwisediv_matrix(matrix &m); //solved issue
	matrix bitwisediv2_matrix(double c);
    static void run(string fpath);
	static void run_adv(string fpath);
    static void handle_read(map<const string, matrix>& matrices,string command,string name0,int op_index);
	static void handle_read_adv(map<const string, matrix>& matrices, string command, string name0, int op_index);
    static void decode(string command,string& name1,string& name2,int op_index);
    static void remove_back_slashes(string& s);
	

  static void call(vector<string>&arr2,vector<double>&fix_arr1,int index,double result);//call in solve function
  static matrix  Solve(string data);//AMERA
	/*take data as A= 5.5 + 12 * sin(0.4) + 2.2^4
   	and store value at map as matrix 1x1 */
	                                                                                      
	static matrix column_by_column (matrix& a, matrix& b);//AYA
	/* ex: if a=  3    3     b= 1                c=a b  ->c= 3  3  1  2    // 2*2 2*1->2*3
	                                                           
	              4    4        6                            4  4  6  6
    */
	static matrix row_by_row(matrix& a,matrix& b); //AYA
	                  /* ex: if a=  3    3     b= 1  6           c=a   ->c= 3  3     // 2*2 1*2->3*2
					                4    4                         b        4  4
	                                                                        1  6
	              
    */                                                     





	matrix Sin();//AYA
	/* sin(B)
ans =

   0.932039   0.745705   0.818560
   0.963558   0.675463  -0.058374
  -0.993691   0.963558   0.998543
*/
    matrix Cos();//AYA
    matrix Tan();//AYA
	matrix Sqrt();//AYA
	/* sqrt(B)
ans =

   1.0954   1.5166   5.7964
   1.1402   1.5492   1.7889
   2.1448   1.1402   2.7928*/
	matrix Pow(int n);//AYA
	/*  B^2
ans =

   158.984    51.958   309.748
    19.400    12.910    76.318
    43.090    23.840   219.554
*/

static	matrix Rand(int a,int b);//AMERA
	/*rand(4,4)
	ans =

   0.506569   0.918578   0.739724   0.105990
   0.426771   0.614705   0.318234   0.448953
   0.510929   0.436886   0.610394   0.190750
   0.713867   0.698260   0.013628   0.215899


	*/

	static matrix Eye (int a,int b);//AMERA
	/*eye(4, 4)

Diagonal Matrix

   1   0   0   0
   0   1   0   0
   0   0   1   0
   0   0   0   1  */
	

	static matrix ones (int a,int b);//ALAA
	/*ones(3, 6)
	ans =
   1   1   1   1   1   1
   1   1   1   1   1   1
   1   1   1   1   1   1
	*/
	 

	
	
	  string getString();
	  /* 
	  returns a string with the values of
	  matrix elements
	  */

	  matrix add_const(double a);
	  /*
	  adds double constant and
	  every element in the matrix then
	  returns the result as a matrix
	  */


	  matrix element_wise_power(double a);
	  /*
	  Every element in the matrix to
	  power of (double constant)
	  */


};

#endif
