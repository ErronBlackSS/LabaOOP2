#include"cloth.h"
#include<vector>
using namespace std;

struct Group {
	struct Node {
		cloth val;
		Node* next;

		Node(cloth _val) : val(_val), next(nullptr) {}
	};
	class Iterator {
	private:
		Node *head;
	public:
		Iterator(Node *head) { this->head = head; }
		Iterator operator++(int) { Iterator itr = *this; head = head->next; return itr; }
		cloth& operator*() { return head->val; }
		bool operator==(const Iterator &itr) { return head->val == itr.head->val; }
		bool operator!=(const Iterator &itr) { return head->val != itr.head->val; }
	};
	Node* first;
	Node* last;
	Group() : first(nullptr), last(nullptr) {}

	bool is_empty() {
		return first == nullptr;
	}
	Iterator begin() {
		return Iterator(first);
	}
	Iterator end() {
		return Iterator(last);
	}
	void push_back(cloth _val) {
		Node* p = new Node(_val);
		if (is_empty()) {
			first = p;
			last = p;
			return;
		}
		last->next = p;
		last = p;
	}
	void print() {
		if (is_empty()) return;
		Node* p = first;
		while (p) {
			p->val.print();
			p = p->next;
		}
		cout << endl;
	}

	Node* operator[] (const int index) {
		if (is_empty()) return nullptr;
		Node* p = first;
		for (int i = 0; i < index; i++) {
			p = p->next;
			if (!p) return nullptr;
		}
		return p;
	}
private:
	Node *head;
};

int main() {
	cin.tie(nullptr);
	setlocale(LC_ALL, "RUSSIAN");
	Group my_group;
	cloth Oleg("Nike","Man", "Yaroslavl","S", "hoodie", 1);
	cloth Anton("Adidas","Woman", "Kirov","L", "pulover", 2);
	cloth Maria("Supreme","Woman", "Tver", "XS", "snapback", 3);
	
	my_group.push_back(Oleg);
	my_group.push_back(Anton);
	my_group.push_back(Maria);

	my_group[0]->val.print();

	auto iter = my_group.begin();

	iter++;

	(*iter).print();
	system("pause");
	return 0;
}