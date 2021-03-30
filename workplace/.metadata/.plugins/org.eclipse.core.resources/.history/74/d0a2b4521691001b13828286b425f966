import java.util.Scanner;

public class HamBill {
	int num, count, point=0;
	String id;
	short [] hamList;
	boolean inputOrder(int hamCount){
		hamList = new short[hamCount];
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		
		if(num==0) return false;
		id = sc.next();
		count = sc.nextInt();
		for(int i = 0 ; i < count ; i++) hamList[sc.nextInt()-1]++;
		return true;
	}
}
