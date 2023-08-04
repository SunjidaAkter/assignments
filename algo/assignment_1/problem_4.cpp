/*
(a)
int count = 0;
for (int i = n; i > 0; i /= 2) 
{
    for (int j = 0; j < n; j+=5) 
   {
        count += 1;
    }
}
Time complexity of the above code is O(n logn)
(b)
for(int i =1; i*i<n; i++)
{
     cout << “hello”;
}
Time complexity of the above code is O(√n)
(c)
for(int i =1; i<n; i=i*2)
{
   for(int j=1; j*j<n; j+=2)
  {
      cout << “hello”;
   }
}
Time complexity of the above code is O(√n logn)
(d)
int m = 1;
for(int i=0; m<=n; i++)
{
    m+=i;
}
Time complexity of the above code is O(√n)
*/