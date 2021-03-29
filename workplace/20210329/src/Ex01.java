import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Ex01 extends JFrame{
	
	JButton btn1 = new JButton("입력");
	DataBaseManager dbm = new DataBaseManager();
	public static JTextField tf_idx;
	public static JTextField tf_name;
	public static JTextField tf_gender;
	public static JTextField tf_remark;
	
	Ex01(){
		getContentPane().setLayout(null);
		
		JLabel lblNewLabel = new JLabel("IDX");
		lblNewLabel.setBounds(12, 21, 62, 24);
		getContentPane().add(lblNewLabel);
		
		JLabel lblName = new JLabel("NAME");
		lblName.setBounds(12, 56, 62, 24);
		getContentPane().add(lblName);
		
		JLabel lblGender = new JLabel("GENDER");
		lblGender.setBounds(12, 90, 62, 24);
		getContentPane().add(lblGender);
		
		JLabel lblRemark = new JLabel("REMARK");
		lblRemark.setBounds(12, 129, 62, 24);
		getContentPane().add(lblRemark);
		
		tf_idx = new JTextField();
		tf_idx.setBounds(86, 22, 116, 24);
		getContentPane().add(tf_idx);
		tf_idx.setColumns(10);
		
		tf_name = new JTextField();
		tf_name.setColumns(10);
		tf_name.setBounds(86, 57, 116, 24);
		getContentPane().add(tf_name);
		
		tf_gender = new JTextField();
		tf_gender.setColumns(10);
		tf_gender.setBounds(86, 92, 116, 24);
		getContentPane().add(tf_gender);
		
		tf_remark = new JTextField();
		tf_remark.setColumns(10);
		tf_remark.setBounds(86, 126, 116, 24);
		getContentPane().add(tf_remark);
		
		btn1.setBounds(234, 111, 100, 30);
//		btn1.addActionListener(new ActionListener() {
//			
//			@Override
//			public void actionPerformed(ActionEvent e) {
//				System.out.println("이것은 인터페이스");
//				
//			}
//		});
		
		btn1.addActionListener((e)->{System.out.println("람다..."); } );
		btn1.addActionListener(dbm);
		
		super.add(btn1)
;		
		setSize(500,600);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
//		for(int i = 0 ; i < 10 ; i++){
//			JFrame jf = new JFrame(i+"");
//			jf.setSize(500,600);
//			jf.setVisible(true);
//		}
	}
	
	public static void main(String[] args){
		new Ex01();
	}
}
