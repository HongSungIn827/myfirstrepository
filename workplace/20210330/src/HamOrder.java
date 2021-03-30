import java.util.ArrayList;
import java.util.Scanner;

public class HamOrder {
	static ArrayList<HamInfo> hamInfo = new ArrayList<>();
	static ArrayList<HamBill> hamBill = new ArrayList<>();
	
	public static void main(String[] args){
		HamOrder hamOrder = new HamOrder();
		hamOrder.process();
	}
	void process() {
        int i = 0, total = 0;
        do hamInfo.add(new HamInfo()); while (hamInfo.get(i++).inputMenu());
        hamInfo.remove(i-1);
        i=0;
        do hamBill.add(new HamBill()); while (hamBill.get(i++).inputOrder(hamInfo.size()));
        hamBill.remove(i-1);
        for (HamInfo j : hamInfo) j.printMenu();
        System.out.println();
        for (HamBill j : hamBill) total += j.printOrder(hamInfo.size());
        System.out.printf("\n\n---총 매출---\n\\%d", total);
        System.out.println("\n\n---재고 결산---");
        for (HamInfo j : hamInfo) System.out.printf("%s %d개 판매 [재고 %d개]\n", j.name, j.sell, j.stock);
    }
}

class HamInfo {
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


class HamBill {
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
	
	int printOrder(int hamCount){
		int sum = 0;
		System.out.printf("[%d] %s\n",num,id);
		for(int i = 0 ; i < hamCount ; i++){
			if(hamList[i] != 0){
				HamInfo ham = HamOrder.hamInfo.get(i);
				System.out.printf("\t%s * %d = %d\n",ham.name,hamList[i],ham.price*hamList[i]);
				ham.sell += hamList[i];
				ham.stock -= hamList[i];
				sum += ham.price*hamList[i];
			}
		}
		for (int i = HamOrder.hamBill.size()-1;i>0;i--){
			if(id.equals(HamOrder.hamBill.get(i).id) && HamOrder.hamBill.get(i).point != 0){
				point += HamOrder.hamBill.get(i).point;
				break;
			}
		}
		point += (int) (sum*0.05);
		System.out.printf("합계 : %d원 (%d Point)\n",sum,point);
		return sum;
	}
}
