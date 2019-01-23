import java.util.LinkedList;
import java.util.Scanner;

public class problem1030 {

    private static class Node {
	
	private int content;
	private Node next;
	private Node previous;
	
	public Node(int content) {
	    this.content = content;
	    this.next = null;
	    this.previous = null;
	}

	public int getContent() {
	    return content;
	}

	public void setContent(int content) {
	    this.content = content;
	}

	public Node getPrevious() {
	    return previous;
	}

	public void setPrevious(Node previous) {
	    this.previous = previous;
	}

	public Node getNext() {
	    return next;
	}

	public void setNext(Node next) {
	    this.next = next;
	}
    }

    public static void main(String[] args) {
	Scanner scan = new Scanner(System.in);	
	int nc, k, n;

	nc = scan.nextInt();

	while (nc > 0) {
	    n = scan.nextInt();
	    k = scan.nextInt();

	    Node root = new Node(1); 
	    root.setNext(root);
	    root.setPrevious(root);

	    int nNodes = 0;

	    Node aux = root;
	    for(int i = 2; i < n; i++) {

		Node node = new Node(i);
		node.setPrevious(aux);
		node.setNext(root);

		aux.setNext(node);
		aux = node;

		nNodes++;
	    }

	    aux = root;
	    while(nNodes != 1) {

		for(int i = 0; i < k; i++)	
		    aux = aux.getNext();

		aux.getPrevious().setNext(aux.getNext());
		aux.getNext().setPrevious(aux.getPrevious());
		aux = aux.getNext();

		nNodes--;
	    }

	    System.out.println(aux.getContent());

	    nc--;
	}
    }
}
