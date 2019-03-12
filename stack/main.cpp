#include <QCoreApplication>
#include <vector>
#include <list>

template <class T, class Container = std::vector<T>>
struct Stack {

private:
    Container cont;

public:
    using container_type = Container;
    using value_type = typename Container::value_type;
    using reference = typename Container::reference;
    using size_type = typename Container::size_type;
    using const_reference = typename Container::const_reference;

    reference top() {
        return cont.back();
    }

    bool empty() const {
        return cont.empty();
    }

    size_type size() const {
        cont.size();
    }

    void swap(Stack& other) noexcept {
        using std::swap;
        swap(cont, other.cont);
    }

    void pop() noexcept {
        cont.pop();
    }

    template <class TP, class Cont>
    bool operator==(const Stack<TP, Cont>& lhs, const Stack<TP, Cont>& rhs) {
        return lhs.cont == rhs.cont;
    }

    template< class Tp, class Cont >
        bool operator!=( const Stack<Tp,Cont>& lhs,const Stack<Tp,Cont>& rhs ){
             return lhs.cont != rhs.cont;
        }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
