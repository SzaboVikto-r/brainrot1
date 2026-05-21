#include <iostream>
#include <string>

static void demo_valtozo() {
    int szam = 42;
    std::string nev = "Vlad";
    std::cout << "[Valtozo] szam=" << szam << "  nev=" << nev << '\n';
}

static void demo_pointer() {
    int ertek = 7;
    int* p = &ertek;
    *p = 99;
    std::cout << "[Pointer] ertek=" << ertek << "  cim=" << p << '\n';
}

static void xerox(int x) { x *= 2; }

static void demo_ertek_szerinti() {
    int a = 5;
    xerox(a);
    std::cout << "[ByValue] a=" << a << " (valtozatlan)\n";
}

static void dealer(int& x) { x *= 2; }

static void demo_referencia() {
    int a = 5;
    dealer(a);
    std::cout << "[ByRef]   a=" << a << " (megduplazva)\n";
}

static void demo_scope() {
    int x = 1;
    {
        int x = 100;
        std::cout << "[Scope]   belso x=" << x << '\n';
    }
    std::cout << "[Scope]   kulso x=" << x << '\n';
}

template<typename T>
static T maxVal(T a, T b) { return a > b ? a : b; }

static void demo_template() {
    std::cout << "[Template] max(3,7)=" << maxVal(3, 7)
              << "  max(1.5,2.5)=" << maxVal(1.5, 2.5) << '\n';
}

static int faktorial(int n) { return n <= 1 ? 1 : n * faktorial(n - 1); }

static void demo_rekurzio() {
    std::cout << "[Recursion] 6!=" << faktorial(6) << '\n';
}

static void demo_nullptr() {
    int* p = nullptr;
    if (p == nullptr)
        std::cout << "[Nullptr]  p null, nem dereferencalhato\n";
}

int main() {
    demo_valtozo();
    demo_pointer();
    demo_ertek_szerinti();
    demo_referencia();
    demo_scope();
    demo_template();
    demo_rekurzio();
    demo_nullptr();
}
