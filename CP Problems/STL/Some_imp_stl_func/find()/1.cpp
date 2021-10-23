auto it = find(v.begin(), v.end(), finding_value);

// If element was found
    if (it != v.end())
    {
     
        // calculating the index of finding_value
        int index = it - v.begin();
        cout << index << endl;
    }
    else {
        // If the element is not present in the vector
        cout << "-1" << endl;
    }
