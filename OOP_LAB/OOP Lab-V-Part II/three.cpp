#include <iostream>
#include <vector>

class Matrix {
   int rows;
   int cols;
   std:: vector<std:: vector<int>> data;


   public:
   Matrix (int r, int c) : rows(r) , cols(c) {
      data.resize(rows , std:: vector<int>(cols , 0));
   }

   Matrix (std:: vector<std:: vector<int>>& d){
      rows = d.size();
      cols = d[0].size();
      data = d;
   }

   void display() {
      for (int i=0; i<rows; i++) {
         for (int j=0; j<cols; j++) {
            std:: cout << data[i][j] << " ";
         }
         std:: cout << std:: endl;
      }
   }

   void userInput() {
      std:: cout <<"Enter Elements for Matrix:\n";
      for (int i=0; i<rows; i++) {
         for (int j=0; j<cols; j++) {
               std:: cin >> data[i][j];
         }
      }
   }

   Matrix transpose() {
      std:: vector<std:: vector<int>> TransposedMatrix(cols , std:: vector<int>(rows , 0));
      for (int i=0; i<rows; i++) {
         for (int j=0; j<cols; j++) {
            TransposedMatrix[j][i] = data[i][j];
         }
      }
      return Matrix(TransposedMatrix);
   }
};

int main() {

   int rows;
   int cols;

   std:: cout <<"Enter no of Rows and Columns respectively:\n";
   std:: cin >> rows >> cols;

   Matrix obj(rows , cols);

   obj.userInput();
   std:: cout <<"User Input\n";
   obj.display();

   Matrix TransposedData = obj.transpose();
   std:: cout <<"Transposed Matrix:\n";
   TransposedData.display();

}