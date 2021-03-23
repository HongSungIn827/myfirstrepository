
public class Dto {
	private int amount;		//	판매수량
	private int del_rev;	// 	배달 판매금액
	private int sto_rev;	//	매장 판매금액
	private int total;		// 	총 매출금액
	private int prime_cost;	//	원가
	private int labor_cost;	//	인건비
	private int net_profit;	//	순 매출금액
	private String menu;
	
	public int getAmount() {
		return amount;
	}
	public void setAmount(int amount) {
		this.amount = amount;
	}
	
	public int getDel_rev() {
		return del_rev;
	}
	public void setDel_rev(int del_rev) {
		this.del_rev = del_rev;
	}
	
	public int getSto_rev() {
		return sto_rev;
	}
	public void setSto_rev(int sto_rev) {
		this.sto_rev = sto_rev;
	}
	
	public int getTotal() {
		return total;
	}
	public void setTotal(int total) {
		this.total = total;
	}
	
	public int getPrime_cost() {
		return prime_cost;
	}
	public void setPrime_cost(int prime_cost) {
		this.prime_cost = prime_cost;
	}
	
	public int getLabor_cost() {
		return labor_cost;
	}
	public void setLabor_cost(int labor_cost) {
		this.labor_cost = labor_cost;
	}
	
	public int getNet_profit() {
		return net_profit;
	}
	public void setNet_profit(int net_profit) {
		this.net_profit = net_profit;
	}
	
	public String getMenu() {
		return menu;
	}
	public void setMenu(String menu) {
		this.menu = menu;
	}
	
	public Dto(){
		
	}
	
	public Dto(int amount,int del_rev,int sto_rev,int total,int prime_cost,int labor_cost,int net_profit,String menu){
		super();
		this.amount = amount;
		this.del_rev = del_rev;
		this.sto_rev = sto_rev;
		this.total = total;
		this.prime_cost = prime_cost;
		this.labor_cost = labor_cost;
		this.net_profit = net_profit;
		this.menu = menu;
	}
}
