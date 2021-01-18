#include <bits/stdc++.h>
using namespace std;

int main() {

   vector <int> stream;         // declearing a vector stream
   int t , median;
   while ( cin >> t ){          // taking running inputs from user
       stream.push_back( t );
   }

   int size_of_stream = stream.size();  // current size of vector stream

   sort(stream.begin(),stream.end());   // sorting vector stream

   // main logic
   if((size_of_stream % 2) != 0){       // for odd size of vector stream
       median=stream[( ( size_of_stream + 1 ) / 2) - 1];
   }
   else{                                // for even size of vector stream
       median=(stream[ ( size_of_stream / 2 ) - 1 ] + stream[ ( size_of_stream / 2 ) ]) / 2;
   }

   // printing median value
   cout<< "median - " << median << endl;

   return 0;
}
