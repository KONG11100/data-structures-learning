import Tree.BiNode;

public class Main {
    static void main(String[] args) {
        BiNode[] test1=new BiNode[10];
        char t='A';
        for(int i=0;i<10;i++){
            test1[i]=new BiNode(t);
            test1[i].data=t++;
        }
        System.out.println(test1[5].data);
    }
}
