#include <iostream>

void printMatrix(int matrix [][3], int n, int m){
	for( int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


void printMatrixThreeDim (int matrix [][2][3], int n, int m, int o){
	for( int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			for(int k = 0; k < o; ++k){
				std::cout << matrix[i][j][k] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}


int getCharCount(char *value){
    int count = 0; 
    for(int i = 0; value[i] != '\0'; ++i) { 
        ++count;
    } 
    return count;  
}

char* longestChar(  char* instance1,   char*  instance2){    
    int seq1 = getCharCount(instance1);
    int seq2 = getCharCount(instance2); 

    if ( seq1 >= seq2){ 
        return  instance1; 
    }
    else{ 
        return instance2;
    }  
}


int main(){
	// 1 and 2.Done
	int arr[4] {1,2,5,7};
	*(arr + 1) = 3;
	std::cout << arr[1] << std::endl;

	// 3.Done
	int matrix[2][3] { 1, 2, 3, 4, 5, 6};
	printMatrix(matrix, 2, 3);
	
	std::cout << "Three dimentional array" << std::endl;
	int mat [2][2][3] { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printMatrixThreeDim(mat,2,2,3);

	//4.Done
	char morehouse[] {'m', 'o', 'r', 'e', 'h','o', 'u','s', 'e'};
	char dilyen[] {'d', 'i', 'l', 'y', 'e', 'n'};

    	auto result = longestChar( morehouse, dilyen);
    	std::cout << "The longest char * is: " << result <<std::endl;	

}
