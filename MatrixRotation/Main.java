import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStreamReader;


public class Main {

	public static void main(String[] args) {
		FileInputStream IS;
		String matrixStr = "";
		int N, pointer;
		try {
			IS = new FileInputStream(args[0]);
			BufferedReader br = new BufferedReader(new InputStreamReader(IS));
			while((matrixStr = br.readLine())!=null){
				// remove all the space in order to solve the array easily
				matrixStr = matrixStr.replaceAll(" ", ""); 
				//find the N x N in a matrix
				N = (int) Math.sqrt(matrixStr.length());
				//Make a char array based on emptied array.
				char matrix[] = matrixStr.toCharArray();
				//get the first char of the last line in the matrix
				pointer = matrix.length - N;
						
				for(int i = 0; i < matrix.length; i++){
					int move = (pointer - (i%N)*N);
					if(move-(N-1) <= 0) {
						pointer++; 
					}
					if(move != (N-1))
						System.out.print(matrix[move] + " ");
					else 
						System.out.print(matrix[move]);
				}
				System.out.println();
			}
		} catch (Exception e) {
			e.printStackTrace();
		}		
	}
}
