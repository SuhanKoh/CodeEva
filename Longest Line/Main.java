import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) {
		try {
			FileInputStream IS = new FileInputStream(args[0]);
			BufferedReader br = new BufferedReader(new InputStreamReader(IS));
			int n = Integer.parseInt(br.readLine()), size = 0;
			List<String> vector = new Vector<String>();
			
			String line;
			while((line = br.readLine())!= null){
				vector.add(line);
				size++;
			}
			String[] lines = new String[size];
			
			vector.toArray(lines);
			
			Arrays.sort(lines, new LengthCompare());
			
			for(int i = lines.length; i > lines.length-n; i--){
				System.out.println(lines[i-1]);
			}
			br.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
		
	}
	/*
	 * http://stackoverflow.com/questions/8632857/sorting-string-lengths-using-comparator
	 */
	static class LengthCompare implements Comparator<String> {
		public int compare(String o1, String o2) {
			if (o1.length() > o2.length()) {
				return 1;
			} else if (o1.length() < o2.length()) {
				return -1;
			} else {
				return 0;
			}
		}
	}

}


