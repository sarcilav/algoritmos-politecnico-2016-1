Node Recorrer(Node head){
  if(head.next != null) return Recorrer(head.next);
  return head;
}
  
Node Insert(Node head,int data) {
// This is a "method-only" submission. 
// You only need to complete this method.
  Node tail = Recorrer(head);
  Node newTail = new Node();
  newTail.data = data;
  tail.next = newTail;
  return head;
}
