
package declaracion;

import java.awt.Color;
import java.awt.Font;
import java.awt.Image;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.io.File;
import java.util.Random;
import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.SwingConstants;


public class Declaracion extends JFrame{
    
    int x(){
    Random r=new Random();
    int n=r.nextInt(441);
    return n;
    }
     int y(){
    Random r=new Random();
    int n=r.nextInt(191);
    return n;
    }
     
     JPanel panel;
     public Declaracion(){
     this.setSize(500,350);
     this.setLocationRelativeTo(null);
     this.setTitle("Declaración de amor");
     this.setResizable(false);
     this.setDefaultCloseOperation(EXIT_ON_CLOSE);
     try{
     Image img=ImageIO.read(new File("IconoAmor2.png"));
     this.setIconImage(img);
     }catch(Exception e){System.out.println(e);} 
     componentes();
     }
     private void componentes(){
     panel();
     Botones();
     etiquetas();
     }
     private void panel(){
     panel=new JPanel();
     panel.setLayout(null);
     this.getContentPane().add(panel);
     }
     private void etiquetas(){
     JLabel etiqueta1=new JLabel("¿QUIERES SER MI NOVIA?",SwingConstants.CENTER);
     etiqueta1.setBounds(90,10,350,180);
     etiqueta1.setForeground(Color.black);
     etiqueta1.setFont(new Font("impact",Font.PLAIN,24));
     panel.add(etiqueta1);
         
     JLabel etiqueta=new JLabel(new ImageIcon("Amor1.jpg"));
     etiqueta.setBounds(0,0,500,350);
     panel.add(etiqueta);
     }
     
     private void Botones(){
     
      JButton boton1=new JButton("SÍ");
      boton1.setBounds(290,200,55,30);
      boton1.setForeground(Color.BLACK);
      boton1.setFont(new Font("Arial Black",Font.PLAIN,12));
      boton1.setFocusPainted(false);
      panel.add(boton1);
     
      MouseListener acepta=new MouseListener() {
          @Override
          public void mouseClicked(MouseEvent me) {
              JOptionPane.showMessageDialog(panel,"¡Sabia que si querias!");
          }

          @Override
          public void mousePressed(MouseEvent me) {
          }

          @Override
          public void mouseReleased(MouseEvent me) {
          }

          @Override
          public void mouseEntered(MouseEvent me) {
          }

          @Override
          public void mouseExited(MouseEvent me) {
          }
      };
      
      boton1.addMouseListener(acepta);
      
      JButton boton2=new JButton("NO");
      boton2.setBounds(150,200,55,30);
      boton2.setForeground(Color.BLACK);
      boton2.setFont(new Font("Arial Black",Font.PLAIN,12));
      boton2.setFocusPainted(false);
      panel.add(boton2);
      
      MouseListener pulsa=new MouseListener() {
          @Override
          public void mouseClicked(MouseEvent me) {
          }

          @Override
          public void mousePressed(MouseEvent me) {
          }

          @Override
          public void mouseReleased(MouseEvent me) {
          }

          @Override
          public void mouseEntered(MouseEvent me) {
              boton2.setBounds(x(), y(), 55, 30);
          }

          @Override
          public void mouseExited(MouseEvent me) {
          }
      };
      
      boton2.addMouseListener(pulsa);
      
      
      
     }
     public static void main(String[]args){
     Declaracion ventana=new Declaracion();
     ventana.setVisible(true);
     }
     
}
