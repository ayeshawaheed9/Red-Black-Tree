#pragma once
template<class T>
struct Node
{
	T data;
	Node<T>* left;
	Node<T>* right;
	Node<T>* father;
	char colour;
public:
	Node();
	~Node();
};
template<class T>
Node<T>::Node()
{
	this->father = nullptr;
	this->left = nullptr;
	this->right = nullptr;
	this->colour = 'B';
}
template<class T>
Node<T>::~Node()
{
	if (this->left != nullptr)
	{
		this->left = nullptr;
		delete[]left;
	}
	if (this->right != nullptr)
	{
		this->right = nullptr;
		delete[]right;
	}
}
