int prime(int n) {
  int i = 1;
  int p = 2;
  int primo = 0;
  int count;
  int flag;
  
  while (i <= n) {
    flag = 1;
    for (count = 2;count <= p-1; count++) {
      if (p % count == 0) {
        flag = 0;
        break;
      }  
    }
    if(flag == 1) {
      primo = p;
      i++;
    }
    p++;
  }
  return primo;
}

