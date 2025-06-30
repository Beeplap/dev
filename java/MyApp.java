import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MyApp {
    public static void main(String[] args) {
        JFrame jframe = new JFrame("My Frame");
        jframe.setBounds(0, 0, 400, 300);
        jframe.setTitle("Page");
        jframe.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jframe.setLocationRelativeTo(null); 


        Container contentPane = jframe.getContentPane();
        contentPane.setBackground(Color.LIGHT_GRAY);
        jframe.setLayout(null);
        jframe.setVisible(true);
        jframe.setResizable(false);
        // jframe.setAlwaysOnTop(true);
        jframe.setFocusable(true);

        JLabel label = new JLabel("CLick the button");
        label.setBounds(150, 50, 100, 30);


        JButton button = new JButton("Click Me");
        button.setBounds(100, 100, 200, 50);
        button.setBackground(Color.BLUE);
        jframe.add(button);
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(jframe, "Button clicked!");
            }
        });


    }
}
