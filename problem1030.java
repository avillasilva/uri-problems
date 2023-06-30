import java.io.IOException;
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

    public static void main(String[] args) throws IOException {
	Scanner scan = new Scanner(System.in);	
	int nc, k, n, nNodes;
	Node head, aux;

	nc = scan.nextInt();	
	int count = 1;
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
	    head.setPrevious(aux);
    
	    aux = head;
	    while(nNodes != 1) {
		
		for(int i = 1; i < k; i++)	
		    aux = aux.getNext();
		
		aux.getPrevious().setNext(aux.getNext());
		aux.getNext().setPrevious(aux.getPrevious());
		aux = aux.getNext();	
		nNodes--; 	
	    }
	    
	    System.out.println("Case " + count + ": " +  aux.getContent());
	    count++; 
	    nc--;
	}
    }
}
