#include <cstdio>

/*struct Hucha {

	int moneda;
	void add_moneda() {
		moneda++;
}
	
};

int main() {
	Hucha miHucha;
	miHucha.moneda = 223;	
	printf("Monedas: %d\n", miHucha.moneda);
	miHucha.add_moneda();
	printf("Monedas: %d\n", miHucha.moneda);

}*/

struct Hucha{

private:
	int moneda;

public:
	void add_moneda() {
		moneda++;
	}
	bool set_moneda(int nuevo_moneda) {
		
			if (nuevo_moneda < 200) return false; 
				moneda = nuevo_moneda;
		return true;
	}
	int get_moneda() {
		
			return moneda;
	}

};

int main() {
	Hucha miHucha; 
		if (!miHucha.set_moneda(425)) {
			// fallará; 135 < 200
				miHucha.set_moneda(200); 
		}
	miHucha.add_moneda(); 
		printf("Monedas: % d", miHucha.get_moneda());
}