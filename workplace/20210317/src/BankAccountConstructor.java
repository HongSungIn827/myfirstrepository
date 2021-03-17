class BankAccount3{
	String accNumber;
	String ssNumber;
	int balance;
	
	public BankAccount3(String acc,String ss,int bal){
		accNumber = acc;
		ssNumber = ss;
		balance = bal;
	}
	
	public int deposit(int amount){
		balance += amount;
		return balance;
	}
	
	public int withdraw(int amount){
		balance -= amount;
		return balance;
	}
	
	public int checkbalance(){
		System.out.println("계좌번호: "+accNumber);
		System.out.println("주민번호: "+ssNumber);
		System.out.println("잔액: "+balance+'\n');
		return balance;
	}
}

public class BankAccountConstructor {
	public static void main(String[] args){
		BankAccount3 Hong = new BankAccount3("11-22-33","870827",20000);
		BankAccount3 Park = new BankAccount3("44-55-66","178341",50000);
		
		Hong.deposit(30000);
		Park.withdraw(30000);
		
		Hong.checkbalance();
		Park.checkbalance();
	}
}
