#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

/**
 * @file
 * @author drapal_g zhang_d
 *
 * @section DESCRIPTION
 *
 * The Trie class represent the class that contains the tree.
 * It works like a Patricia Trie with the attribute data_ being 
 * the vector of strings that exists in this trie.
 *
 */

#include "node.hh"

class Trie {
  public:
    /**
     * Default constructor.
     */
    Trie();

    /**
     * Default destructor.
     */
    ~Trie();

    /**
     * Insert a new word into the trie.
     *
     * @param The word to insert.
     * @param The frequency of the word.
     */
    void insert(std::string word, int freq);

    /**
     * Write the current trie into the output file.
     *
     * @param The stream linked to the output file.
     */
    void serialize(std::fstream& output);
    void deserialize(std::fstream& in);

    /**
     * Print the trie.
     */
    void print();
    void printword();
    std::vector<Search> search(std::string word, int dist);
    std::vector<Search> sort(std::vector<Search> s);
    static bool sortVector(Search s1, Search s2);

    void printdist(std::vector<Search> distances);
    int nbprint();
    std::string data_;
  private:
    Node root_;
};
