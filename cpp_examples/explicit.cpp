#include <iostream>
using namespace std;

class Blah
{
  public:

    // Overloaded constructor
    explicit Blah(int blah) 
    {
      m_blah = blah;
    }

    int GetBlah()
    { 
      return m_blah;
    }

  private:
    int m_blah;
};

void Ext_Blah (Blah blah)
{
  int x = blah.GetBlah ();
}

int main() {
  // your code goes here
  Blah b(3);
	Ext_Blah (b);

}
