

/*Write the class AddElements here*/
template<class T>
class AddElements {
    T element1;
    public:
    AddElements(T arg) {
        element1 = arg;
    }
    
    T add(T element2) {
        return element1 + element2;
    };
    
    string concatenate(string element2) {
        return element1 + element2;
    }
};

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';

