class BankAccount1{
	int balance = 0;
	
	public int deposit(int amount){
		balance += amount;
		return balance;	
	}
	
	public int withdraw(int amount){
		balance -= amount;
		return balance;
	}
	
	public int checkbalance(){
		System.out.println("잔액: "+balance);
		return balance;
	}
}

public class PassingRef {
	public static void main(String[] args){
		BankAccount1 ref = new BankAccount1();
		ref.deposit(8000);
		ref.withdraw(4000);
		ref.checkbalance();
		check(ref);
	}
	
	public static void check(BankAccount1 acc){
		acc.deposit(6000);
		acc.checkbalance();
	}
}
