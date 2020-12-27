    #include <iostream>
    using namespace std;
    int main()
    {
        int raga[10][10], jaga[10][10], saga[10][10], r1, c1, r2, c2, i, j, k;
        cout<<"Enter rows for first matrix:";
        cin>>r1;
        cout << "Enter columns for First matrix:";
        cin>>c1;
        cout<<"Enter rows for Second matrix:";
        cin>>r2;
        cout << "Enter columns for second matrix:";
        cin>>c2;
        while (c1!=r2)
        {
            cout << "Error!\ncolumn of first matrix not equal to row of second.\n";
            cout<<"Enter rows for first matrix:";
        	cin>>r1;
        	cout << "Enter columns for First matrix:";
        	cin>>c1;
        	cout<<"Enter rows for Second matrix:";
        	cin>>r2;
        	cout << "Enter columns for second matrix:";
        	cin>>c2;
        }
        cout <<"\nEnter elements of matrix 1:\n";
        for(i = 0; i < r1; ++i)
        {
            for(j = 0; j < c1; ++j)
            {
                cout << "raga" <<i<<j<< " : ";
                cin >> raga[i][j];
            }
        }
        cout<<"\nEnter elements of matrix 2:" << endl;
        for(i = 0; i < r2; ++i)
        {
            for(j = 0; j < c2; ++j)
            {
                cout << "jaga" <<i<<j<< " : ";
                cin >> jaga[i][j];
            }
        }
        
        for(i = 0; i < r1; ++i)
        {
            for(j = 0; j < c2; ++j)
            {
            	saga[i][j]=0;
                for(k = 0; k < c1; ++k)
                    saga[i][j] = saga[i][j]+raga[i][k] * jaga[k][j];
        	}
    	}
        cout<<"\nOutput Matrix: \n";
        for(i = 0; i < r1; ++i)
        {
        	for(j = 0; j < c2; ++j)
            	cout << " " << saga[i][j];
        	cout << endl;
    	}
    	return 0;
   }
