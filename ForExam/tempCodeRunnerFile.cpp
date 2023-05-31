class base
{

    int x, y;

public:
    base(int a, int b)
    {
        x = a;
        y = b;
        cout<<"Base called"<<endl;
    }
    operator baby()
    {
        baby me(x, y);
        cout<<"operator called"<<endl;
        return me;
    }
};