class BankAccount{
	String accNumber;
	String ssNumber;
	int balance = 0;
	
	// 초기화를 위한 메소드 설정
	public void initAccount(String acc, String ss, int bal){
		accNumber = acc;
		ssNumber = ss;
		balance = bal;	// 계좌 개설 시 예금액으로 초기화
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

class DupRef {
	public static void main(String[] args){
			BankAccount Rooney = new BankAccount();
			Rooney.initAccount("12-34-56","1783419",10000);
			
			BankAccount Rui = new BankAccount();
			Rui.initAccount("78-65-43","870827",30000);
			
			Rooney.deposit(50000);
			Rui.withdraw(20000);
			
			Rooney.checkbalance();
			Rui.checkbalance();
	}
}
