import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class form {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Form");
        frame.setSize(400, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setLayout(new FlowLayout());

        JButton button = new JButton("Click Me");
        button.setPreferredSize(new Dimension(100, 40));
        button.addActionListener(new ActionListener() {
            private boolean isRed = false;

            @Override
            public void actionPerformed(ActionEvent e) {
                if (isRed) {
                    button.setBackground(null); 
                } else {
                    button.setBackground(Color.RED);
                }
                isRed = !isRed;
            }
        });

        JRadioButton radioButton = new JRadioButton("Select Me");
        radioButton.addActionListener(new ActionListener() {
            private boolean black = false;

            @Override
            public void actionPerformed(ActionEvent e) {
                if (black) {
                    frame.getContentPane().setBackground(null); 
                } else {
                    frame.getContentPane().setBackground(Color.BLACK);
                }
                black = !black;
            }
        });

        frame.add(button);
        frame.add(radioButton);

        frame.setVisible(true);
    }
}
