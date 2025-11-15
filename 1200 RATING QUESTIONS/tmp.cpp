bool forodd = false, foreven = false;
for (int i = 0; i < n; i++)
{
    int pos = i + 1;
    if (pos % 2 == 0)
    {
        if (s[pos - 1] != c)
        {
            foreven = true;
        }
    }
    else
    {
        if (s[pos - 1] != c)
        {
            forodd = true;
        }
    }
}
if (forodd && foreven)
{
    cout << 2 << endl;
    cout << 2 << " " << 3 << endl;
}
else if (forodd)
{
    cout << 1 << endl;
    cout << 2 << endl;
}
else if (foreven)
{
    cout << 1 << endl;
    cout << 3 << endl;
}
else
{
    cout << 0 << endl;
}