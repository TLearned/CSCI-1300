void stepSizePrint(int sp, int ep, int ss)
{
    if (ss > 0 && ep < sp)
    {
        cout << "Wrong settings!" << endl;
    }
    
    else if (ss < 0 && ep > sp)
    {
        cout << "Wrong settings!" << endl;
    }
    
    else if (ss == 0)
    {
        cout << "Step size cannot be zero." << endl;
    }
}