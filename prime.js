const prime = n => {
  let i = 1;
  let p = 2;
  let primo = 0;
  let count;
  let flag;

  while (i <= n) {
    flag = 1;
    for (count = 2; count <= p - 1; count++) {
      if (p % count == 0) {
        flag = 0;
        break;
      }
    }
    if (flag == 1) {
      primo = p;
      i++;
    }
    p++;
  }
  return primo;
}

