#include <iostream>
#include <cmath>

using namespace std;

#define z 6
#define INPUT(x) cin >> x
#define PRINT(s) cout << (s)
#define ABS(x) (((x)<0)?(-(x)):(x))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define POW2(x) ((x)*(x))

#define analyz(x, msg, ...) \
if (!(x)) {\
    cout << "ERORR_" << msg << "["<< #x << "] " << __FILE__ << "(" << __LINE__ << ")"; \
    throw; }\
else \
    cout << "All good" << endl;


int main(void)
{
	double x, y, w = 0;
	PRINT("x = "); INPUT(x);
	PRINT("y = "); INPUT(y);

#if 5 < z && z < 10
	w = MIN(x, z) * MAX(x + z, x * z);
#elif z <= 5 || z >= 10
	w = POW2(MAX(ABS(x - z), z));
#endif

	cout << endl;

	PRINT(w);

	cout << endl;
	cout << endl;

    analyz(w = 24, "test");

    return 0;
}