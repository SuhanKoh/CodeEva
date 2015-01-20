import java.io.BufferedReader;
import java.io.FileReader;
import java.util.Stack;
import java.util.StringTokenizer;


public class Main {
	//Static because I don't want to make objects
	private static Stack<String> operators = new Stack<String>();
	private static Stack<String> operands = new Stack<String>();

	public static void main(String[] args) {
		String line = "";
		String token = "";
		String delimiter = " ";
		StringTokenizer st;
		try{
			BufferedReader reader = new BufferedReader(new FileReader(args[0]));

			while((line=reader.readLine()) != null){
				int counter = 0; //using a counter to keep track of operand, because it will try to solve when you have two operands.
				st = new StringTokenizer(line,delimiter,true);
					while(st.hasMoreTokens()){
						if(!(token=st.nextToken()).equals(delimiter)){
							if(counter == 2){
								calculate();
								counter = 1;
							}
							if(isOperator(token)){
								operators.add(token);
								counter = 0; // reset counter because ie: + 2 + 3 4, it will solve 3+4 first
							}else{
								operands.add(token);
								counter++;
							}
						}
					}
					while(!operators.isEmpty()){
						calculate();
					}
					String[] format = operands.pop().split("\\.");
					System.out.println(format[0]);
					operands.clear();
			}
			reader.close();
		}catch(Exception e){
			e.printStackTrace();
		}
	}
	
	public static boolean isOperator(String op){
		try{
			Double.parseDouble(op);
		}catch(Exception e){
			return true;
		}
		return false;
	}

	public static void calculate(){
		String opr = operators.pop();
		double opd2 = Double.parseDouble(operands.pop());
		double opd1 = Double.parseDouble(operands.pop());
		
		if(opr.equals("+")){
			operands.add(String.valueOf(opd1+opd2));
		}else if(opr.equals("*")){
			operands.add(String.valueOf(opd1*opd2));
		}else if(opr.equals("-")){
			operands.add(String.valueOf(opd1-opd2));
		}else if(opr.equals("/")){
			operands.add(String.valueOf(opd1/opd2));
		}
	}
}
