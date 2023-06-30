int firstvectorindex = 0;
    int secondvectorindex = 0;
    int mainvectorindex = s;
    while (firstvectorindex < len1 && secondvectorindex < len2)
    {
        if (v1[firstvectorindex] < v2[secondvectorindex])
        {
            // v.push_back(v1[firstvectorindex]);
            v[mainvectorindex] = v1[firstvectorindex];
            firstvectorindex++;
            mainvectorindex++;
        }
        else
        {
            v[mainvectorindex] = v2[secondvectorindex];
            secondvectorindex++;
            mainvectorindex++;
        }
    }
    while (firstvectorindex < len1)
    {
        v[mainvectorindex] = v1[firstvectorindex];
        firstvectorindex++;
        mainvectorindex++;
    }
    while (secondvectorindex < len2)
    {
        v[mainvectorindex] = v2[secondvectorindex];
        secondvectorindex++;
        mainvectorindex++;
    }