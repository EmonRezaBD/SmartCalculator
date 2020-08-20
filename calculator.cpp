#pragma GCC optimize("ofsat")
#pragma GCC  target("avx,avx2,fma")
 
#include<bits/stdc++.h>
#include<algorithm>
//#include<unordered_map>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
 
 
#define ui              unsigned int
#define ll              long long int
#define ld              long double
#define ull             unsigned long long int
 
 
#define ff              first
#define ss              second
#define pb              push_back
#define mp              make_pair
 
 
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> > //read??
 
 
#define setbits(x)      __builtin_popcountll(x) //return total setbit
#define zrobits(x)      __builtin_ctzll(x)      //return total 0 until 1 found
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define sz(x)           (int)x.size()
#define tc(x)           int x; cin>>x; while(x--)
 
 
#define arrsort(ar,n)   sort(ar,ar+n);
#define vsort(v)        sort(v.begin(),v.end())
#define vrev(v)         reverse(v.begin(),v.end())
#define arrev(ar,n)     reverse(ar,ar+n)

 
#define ok              cout<<"ok"<<endl
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << "," << #y << "=" << y << endl


#define for0(i,n)       for(ll i=0;i<n;i++)
#define fo(i,k,n)       for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1) ///Study------------------>
#define iter(it, a)     for(auto it = a.begin(); it != a.end(); it++)
#define riter(it,a)     for(auto it = a.rbegin();it != a.rend(); it++)
 

#define PI              acos(-1.0)
#define EPS             1e-12
 
 
const ll                inf = 1000000000;
const ll                mod = 1000000000 + 7;
 
 
 
#define mxe(v)          *max_element(all(v))
#define mine(v)         *min_element(all(v))
#define all(x)          (x).begin(),(x).end()

 
#define fast            ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
 
 
// int dx4[] = { 0, 0, -1, +1 };                     int dy4[] = { +1, -1, 0, 0 };
// int dx8[] = { 1, 1, 0, -1, -1, -1, 0, 1, 0 };     int dy8[] = { 0, 1, 1, 1, 0, -1, -1, -1, 0 };
 
 
 
// template<typename... T>
// void read(T&... args)
// {
//  ((cin >> args), ...);
// }
 
 
// template<typename... T>
// void write(T&&... args)
// {
//  ((cout << args <<" "), ...);
// }
 
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
/*
    char x=*(max_element(s.begin(),s.end()));
    sort(s.begin(),s.end(),greater<char>());
 
 
 
 
*/
 
// int cti(char c)
// {
// 	return c-'0';
// }

ll GCD(ll a, ll b)
{
	if(a==b)
		return a;
	if(b==0)
		return a;
	return GCD(b,a%b);
} 

void ArithmeticOperations()
{
	cout<<"Choose an option: \n";
	cout<<"1. Addition.\n";
	cout<<"2. Subtraction.\n";
	cout<<"3. Multiplication.\n";
	cout<<"4. Division.\n";
	cout<<"5. Modulus.\n";
	cout<<"6. BigMod.\n";
	cout<<"7. GCD.\n";
	cout<<"8. LCM.\n";



	int option;
	cin>>option;

	switch(option)
	{
		case 1:
		{
			cout<<"Addition: \n\n";

			ll nums,sum=0;
			while(cin>>nums)
			{
				sum+=nums;
			}
			cout<<"Total summation is: "<<sum<<"\n";
			break;
			
		}
		case 2:
		{
			cout<<"Subtraction: \n\n";

			ll nums,sub=0;

			while(cin>>nums)
			{
				sub-=nums;
			}
			cout<<"Total Subtraction is: "<<sub<<"\n";
			break;
			
		}
		case 3:
		{
			cout<<"Multiplication: \n\n";

			ll nums, mul=1;
			while(cin>>nums)
			{
				mul*=nums;
			}
			cout<<"Total Multiplication is: "<<mul<<"\n";
			break;
			
		}
		case 4:
		{
			cout<<"Division: \n\n";
			ll div=1;
			cout<<"Enter two numbers:\n";
			ll num1,num2;

			cin>>num1>>num2;

			cout<<"Division of num1/num2 is: "<<num1/num2<<"\n";
			break;
			
		}
		case 5:
		{
			cout<<"Modulus: \n\n";
			cout<<"Enter two numbers:\n";
			ll num1,num2;
			cin>>num1>>num2;

			cout<<"Modulus of "<<num1<<"%"<<num2<<" is: "<<num1%num2<<"\n";
			break;
			
		}
		case 6:
		{
			break;
		}
		case 7:
		{
			cout<<"GCD.\n\n";
			cout<<"Enter two numbers: \n";
			ll a,b;
			cin>>a>>b;

			cout<<"GCD is: "<<GCD(a,b)<<"\n";

			break;
		}
		case 8:
		{
			break;
		}
		default:
		{
			break;
		}


	}


}



void BitwiseOperations()
{
	cout<<"Choose an option:\n";
	cout<<"1.OR Operation.\n";
	cout<<"2.AND Operation.\n";
	cout<<"3.NOT Operation.\n";
	cout<<"4.XOR Operation\n";
	cout<<"5.Right Shift Operation.\n";
	cout<<"6.Left Shift Operation.\n";



	int option;
	cin>>option;

	switch(option)
	{
		case 1:
		{
			cout<<"OR Operation\n\n";
			ll nums,result=0;
			while(cin>>nums)
			{
				result|=nums;
			}
			cout<<"Total OR of all numbers you entered: "<<result<<"\n";

			break;
		}
		case 2: ///***********************
		{
			cout<<"AND Operation\n\n";
			ll nums,result=1;
			while(cin>>nums)
			{
				result &= nums;
			}
			cout<<"Total AND of all numbers you entered: "<<result<<"\n";
			

			break;
		}
		case 3:
		{
			cout<<"NOT Operation\n\n";
			ll num;
			cout<<"Enter a number: \n";
			cin>>num;
			cout<<"After Flipping all bits of that number is: "<< ~num<<"\n";

			break;
		}
		case 4:
		{
			cout<<"XOR Operation\n\n";
			ll nums,result=1; ////**************************s
			while(cin>>nums)
			{
				result ^= nums;
			}
			cout<<"Total XOR of all numbers you entered: "<<result<<"\n";
			

			break;
		}
		case 5:
		{
			cout<<"Right Shift Operation\n\n";

			ll num,numOfTimes;
			cout<<"Enter a number: \n";
			cout<<"How many times you want to shift: \n";

			cin>>num>>numOfTimes;
			cout<<"After shifting "<<numOfTimes <<" times right: "<< (num>>numOfTimes) <<"\n";

			break;
		}
		case 6:
		{
			cout<<"Left Operation\n\n";

			ll num,numOfTimes;
			cout<<"Enter a number: \n";
			cout<<"How many times you want to shift: \n";

			cin>>num>>numOfTimes;
			cout<<"After shifting "<<numOfTimes<<" times left "<<(num<<numOfTimes) <<"\n";

			break;
		}
		default:
		{
			break;
		}
	}
}


void DivisibilityTest()
{
	ll number;
	cout<<"You can determine by which digits this number can be divisible.\n";
	cout<<"Enter a number:\n";
	cin>>number;

	vi v;
	for(int i=2;i<=9;i++) v.pb(i);
	for0(i,sz(v))
    {
    	if( !(number%v[i]) )
    	{
    		cout<<"It is divisible by "<<v[i]<<"\n";
    	}
    }
}

bool isPrime(ll number)
{
	if(number<=1)
		return false;
	for(ll i=2; i*i<=number ; i++)
	{
		if(number%i==0)
			return false;
	}
	return true;
	
}

void PrimalityTest()
{
	ll number;
	cout<<"You can check a number is prime or not.\n";
	cout<<"Enter a number:\n";

	cin>>number;

	(isPrime(number))? cout<<"It is a prime number.\n" : cout<<"It is not a prime number.\n";
}





int main()
{
	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

	cout<<"Choose an option: "<<"\n";
	cout<<"1. Arithmetic Operations."<<"\n";
	cout<<"2. Bitwise Operations."<<"\n";
	cout<<"3. Test Divisibility of a number.\n";
	cout<<"4. Primality Test.\n";
	cout<<"5. Palindromic Test.\n";

	int option;
	cin>>option;

	switch (option)
	{
		case 1:
		{
			ArithmeticOperations();
			break;
		}
		case 2:
		{
			BitwiseOperations();
			break;
		}
		case 3:
		{
			DivisibilityTest();
			break;
		}
		case 4:
		{
			PrimalityTest();
			break;
		}
		default:
		{
			break;
		}

	}
	
	return 0;
}