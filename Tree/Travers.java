package Tree;

public class Travers {
    public void PreOrder(BiNode T){
        if(T==null)return;
        System.out.println(T.data);
        PreOrder(T.lchild);
        PreOrder(T.rchild);
    }

    public void InOrder(BiNode T){
        if(T==null)return;
        InOrder(T.lchild);
        System.out.println(T.data);
        InOrder(T.rchild);
    }

    public void PostOrder(BiNode T){
        if(T==null)return;
        PostOrder(T.lchild);
        PostOrder(T.rchild);
        System.out.println(T.data);
    }
}
