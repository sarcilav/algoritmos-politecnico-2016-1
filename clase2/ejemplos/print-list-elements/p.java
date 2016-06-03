void Print(Node head) {
  if(head == null) return;
  System.out.println(head.data);
  Print(head.next);
  
}
