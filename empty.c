class Empty {
private:

public:
    //Empty() { }
    //Empty(const Empty& rhs) -> { all member copy!! }
    //~Empty() { }   
    // Empty& operator = (const Empty& rhs) -> { all member copy!! }
    // Empty& operator&() [return this]
    // const Empty *operator() const
};

int main()
{
    Empty e1;
    Empty e2 = e1;
    
    e2 = e1;
    
    
    Empty *pe = &e1;
    
    const Empty e3;
    const Empty *pe2 = &e3;     //e3.operator&()
    
    
    return 0;
  
///////////////////////////////////////////////////////////////////
2021.05.17 전달값
  
