#include <iostream>
#include <vector>

using namespace std;

int main() {
	int variable = 12;

	int* puntero = &variable;
	
	vector<int> resultados;



	string palabra = "haLO";
	auto* punta = &palabra;




	for (int i = 0; i < 100; i++) {
		//cout << puntero << " " << *puntero << endl;
		resultados.push_back(int(puntero));

		puntero++;
	}

	for (auto valor : resultados) {
		cout << valor << endl;
	}
	/*for (int i = 0; i < 100; i++) {
		cout << punta << " " << char(punta++) << endl;

	}*/

}
