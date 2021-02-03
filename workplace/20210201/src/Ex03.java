import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Ex03 {
	public static void main(String[] args) throws NumberFormatException, IOException{
		int kor = 0;
		int eng = 0;
		int math = 0;
		int avg = 0;
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("국어점수: ");
		kor = Integer.parseInt(br.readLine());
		System.out.println("영어점수: ");
		eng = Integer.parseInt(br.readLine());
		System.out.println("수학점수: ");
		math = Integer.parseInt(br.readLine());
		
		avg = (kor+eng+math)/3;
		System.out.println("avg ="+avg);
		
		if(avg >=90)
			System.out.println("90점이상 A학점");
		else if(avg >=80)
			System.out.println("80점이상 B학점");
		else if(avg >=70)
			System.out.println("70점이상 C학점");
		else
			System.out.println("F학점");
	}

}
