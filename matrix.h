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
	double cal_determin_sq(int num_rows);
	matrix inverse_2();
	// calculate co-factor func
	matrix cal_cofactor(int num_rows);
	// find transpose func
    matrix transpose(matrix& fac, double r);
	int check_zero_dete();
public:
    matrix();
    matrix(string values);
    void initialize(int rows, int cols);
	void initialize_by1(int rows, int cols);
    int get_num_rows (){ return this->num_rows;}
    int get_num_columns (){  return this->num_columns; }
    void print_matrix();
    // tasks:
	double determinant_2(int n);
    void fill_matrix (string data1);
    matrix add_matrix( matrix& m);
    matrix sub_matrix( matrix& m);
    matrix mult_matrix( matrix& m);
    matrix inverse_matrix();
    matrix transpose_matrix();
    matrix div_matrix( matrix& m);
	matrix bitwisediv_matrix(matrix &m);
	matrix bitwisediv2_matrix(double c);
    static void run(string fpath);
    static void handle_read(map<const string, matrix>& matrices,string command,string name0,int op_index);
    static void decode(string command,string& name1,string& name2,int op_index);
    static void remove_back_slashes(string& s);
	


	
  static matrix  Solve(string data);//AMERA
	/*take data as A= 5.5 + 12 * sin(0.4) + 2.2^4
   	and return matrix */
	
	void fill_matrix2(string data);//AYA
	/* take data and fill matrix
	B = [1.2 2.3 A;[1.3 2.4;4.6 1.3],[3.2;7.8]];
	B =

    1.2000    2.3000   33.5986
    1.3000    2.4000    3.2000
    4.6000    1.3000    7.8000

                   */

	void fill_matrix3(string data);  //ALAA
	/* taka data and fill matrix
	C = [[B [3.4; 2.1; 3.5+9.1]]
     1.2^3 3+1.2 15/(2.1+10*sin(0.12))  1.2]
	 C =
    1.2000    2.3000   33.5986    3.4000
    1.3000    2.4000    3.2000    2.1000
    4.6000    1.3000    7.8000   12.6000
    1.7280    4.2000    4.5494    1.2000

	
	*/

	matrix Sin();//AYA
	/* sin(B)
ans =

   0.932039   0.745705   0.818560
   0.963558   0.675463  -0.058374
  -0.993691   0.963558   0.998543
*/
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
	static matrix Zeros (int a,int b);//ALAA
	/*zeros(2, 3)
	ans =
   0   0   0
   0   0   0
	*/

	static matrix ones (int a,int b);//ALAA
	/*ones(3, 6)
	ans =
   1   1   1   1   1   1
   1   1   1   1   1   1
   1   1   1   1   1   1
	*/
	
	
	


    
};

#endif
