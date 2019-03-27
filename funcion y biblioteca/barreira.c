int obtenerMaximos(int x, int y, int z)
{
    int numMax;

    if(x>y && x>z)
    {
        numMax=x;
    }
        else if(y>=x && y>z)
        {
            numMax=y;
        }
        else
        {
            numMax=z;
        }

    return numMax;
}
