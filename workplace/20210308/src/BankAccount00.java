class BankAccount{
	int balance = 0;
	
	public int deposit(int amount){
		balance+=amount;
		return balance;
	}
	
	public int withdraw(int amount){
		balance-=amount;
		return balance;
	}
	
	public int checkMyBalance(){
		System.out.println("�ܾ� : "+balance);
		return balance;
	}
}


class BankAccount00 {
	public static void main(String[] args){
		BankAccount yoon = new BankAccount();
		BankAccount park = new BankAccount();
		
		yoon.deposit(10000);
		park.deposit(20000);
		
		yoon.withdraw(2000);
		park.withdraw(3000);
		
		yoon.checkMyBalance();
		park.checkMyBalance();
	}
}
