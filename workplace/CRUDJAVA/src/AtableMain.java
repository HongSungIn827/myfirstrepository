import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

public class AtableMain {
	
	public AtableMain(){
		Scanner scan = new Scanner(System.in);
		ManagerAtable ma = new ManagerAtable();
		while(true){
		System.out.println("뭐할래? 1번 insert 2번update 3번delete 4번select");
		int select = scan.nextInt();
		if(select == 1)
			ma.insertAtable();
		else if(select == 2)
			ma.updateAtable();
		else if(select == 3)
			ma.deleteAtable();
		else if(select == 4)
			ma.selectAtable();
		else
			System.exit(1);
		}
	}
	
	public static void main(String[] args){
		
		new AtableMain();
	}
}
