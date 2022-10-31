#include <bits/stdc++.h>
using namespace std;

int searchElement(int arr[], int size, int x)
{

  size--;

  if (size < 0)
  {
    return -1;
  }

  if (arr[size] == x)
  {
    return size;
  }

  return searchElement(arr, size, x);
}
void removeConsecutiveDuplicates(char *input)
{
  if (input[0] == '\0')
  {
    return;
  }
  if (input[0] != input[1])
  {
    removeConsecutiveDuplicates(input + 1);
  }
  else
  {
    int i = 1;
    for (; input[i] != '\0'; i++)
    {
      input[i - 1] = input[i];
    }
    input[i - 1] = input[i];
    removeConsecutiveDuplicates(input);
  }
}
string concatenateLargest(string a, string b)
{
  if (a.size() == 0 or b.size() == 0)
  {
    return (a + b);
  }
  if (a <= b)
    return b[0] + concatenateLargest(a, b.substr(1));
  else
    return a[0] + concatenateLargest(a.substr(1), b);
}
void reverse(int n)
{

  if (n < 10)
  {
    cout << n;
    return;
  }

  else
  {
    cout << n % 10;
    reverse(n / 10);
  }
}
int main()
{
  string s, a, b;
  int choice;
  cout << "Enter 1, 2,3,4 or 5: ";
  cin >> choice;
  switch (choice)
  {
    case 1:
    {
      int n, x;
      cin >> n;
      int a[n];

      for (int i = 0; i < n; i++)
      {
        cin >> a[i];
      }

      cin >> x;
      int idx = searchElement(a, n, x);
      if (idx != -1)
      {
        cout << "Found";
      }
      else
      {
        cout << "Not Found";
      }
      cout << "hh";

      break;
    }
    case 2:
    {
      char s[100000];
      cin >> s;
      removeConsecutiveDuplicates(s);
      cout << s << endl;
      break;
    }
    case 3:
    {
      string a, b;
      cin >> a >> b;
      string s = concatenateLargest(a, b);
      sort(s.begin(), s.end());
      cout << s << endl;

      break;
    }
    case 4:
    {
      int n;
      cin >> n;
      reverse(n);

      break;
    }
    default:
      cout << "Exit";
      break;
  }
  return 0;
}