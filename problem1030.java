import java.util.LinkedList;
import java.util.Scanner;

public class problem1030 {

    private static class Node {
	
	private int content;
	private Node next;
	private Node previous;
	
	public Node() {
	    this.content = 0;
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
	int nc, k, n, nNodes;
	Node head, aux;

	nc = scan.nextInt();

	while (nc > 0) {
	    n = scan.nextInt();
	    k = scan.nextInt();

	    head = new Node(); 
	    head.setContent(1);
	    head.setNext(head);
	    head.setPrevious(head);

	    nNodes = 1;

	    aux = head;
	    for(int i = 2; i <= n; i++) {

		Node node = new Node();
		node.setContent(i);
		node.setPrevious(aux);
		node.setNext(head);

		aux.setNext(node);
		aux = node;

		nNodes++;
	    }
    
	    aux = head;
	    System.out.println(nNodes);
	    while(nNodes != 1) {
		for(int i = 1; i < k; i++)	
		    aux = aux.getNext();
		
		System.out.println(aux.getContent());
		aux.getPrevious().setNext(aux.getNext());
		aux.getNext().setPrevious(aux.getPrevious());
		
		nNodes--; 

		if(nNodes != 1)
		    aux = aux.getNext();
	    }
	    
	    System.out.println(aux.getPrevious().getContent() + " " + aux.getContent() + " " + aux.getNext().getContent());
    
	    nc--;
	}
    }
}
