import java.util.Scanner;

public class HamInfo {
	int id, price, stock, sell;
	String name;
	boolean inputMenu(){
		Scanner sc = new Scanner(System.in);
		id = sc.nextInt();
		if(id==0) return false;
		name = sc.next();
		price = sc.nextInt();
		stock = sc.nextInt();
		return true;
	}
	void printMenu(){
		System.out.printf("[%d] %s %d원 %d개\n",id,name,price,stock);
	}
}
