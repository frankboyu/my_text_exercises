    cout << "Enter the information of up to 5 golfers, terminate with empty name." << endl;
    golf list[5];
    int flag;
    for (int i = 0; i < 5; i++)
    {
        if (setgolf(list[i]) == 0)
        {
            cout << "Empty name, terminating..." << endl;
            break;
        }
        showgolf(list[i]);
    }

    return 0;
}