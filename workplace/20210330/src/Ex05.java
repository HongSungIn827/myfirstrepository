import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Color;
import javax.swing.JButton;
import java.awt.CardLayout;

public class Ex05 extends JFrame{
	class Mypanel extends JPanel{
		public String name;
		public Mypanel(String name){
			
		}
	}
	public Ex05() {
		getContentPane().setLayout(null);
		
		JButton btnNewButton = new JButton("New button");
		btnNewButton.setBounds(10, 427, 97, 23);
		getContentPane().add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("New button");
		btnNewButton_1.setBounds(119, 427, 97, 23);
		getContentPane().add(btnNewButton_1);
		
		JPanel panel = new JPanel();
		panel.setBounds(0, 10, 484, 407);
		getContentPane().add(panel);
		panel.setLayout(new CardLayout(0, 0));
		
		CardLayout cards = (CardLayout) panel.getLayout();
		Mypanel mp = new Mypanel("1");
	
		
		setSize(500,600);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public static void main(String[] args) {
		new Ex05();
	}
}
