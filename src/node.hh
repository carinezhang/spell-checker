#include <list>
#include <string>

class Node {
  public:
    Node();
		Node(int start, int length, int frequency);
    ~Node();
		void insert(std::string word, int frequency, std::string& data);
		void addSon(std::list<Node> sons, int frequency, std::string& data, std::string word);
		void serialize();
	private:
		int start_;
		int length_;
		int frequency_;
		std::list<Node> sons_;
		//char padding[7];
};