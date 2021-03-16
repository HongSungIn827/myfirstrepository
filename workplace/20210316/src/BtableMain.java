import java.util.Scanner;

public class BtableMain {
	
	public BtableMain(){
		Scanner scan = new Scanner(System.in);
		ManagerBtable mb = new ManagerBtable();
		
		while(true){
			System.out.println("Option -> 1번 insert 2번 update 3번 delete 4번 select");
			int select = scan.nextInt();
			
			if(select == 1)
				mb.insertBtable();
			else if(select == 2)
				mb.updateBtable();
			else if(select == 3)
				mb.deleteBtable();
			else if(select == 4)
				mb.selectBtable();
			else
				System.exit(1);
		}
	}
	
	public static void main(String[] args){
		new BtableMain();
	}
}
