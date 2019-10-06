/**
 * @file   LinkedList.h
 * @author Wang Heyu 
 * @date   Sat Aug 31 15:54:20 2019
 * 
 * @brief  An implementation of the dynamic ADT List. 
 * This is a demo for teaching, NOT recommended for 
 * any practical job.
 * 
 */

#ifndef __CRAZYFISH__LinkedList__
#define __CRAZYFISH__LinkedList__

#include <iostream>
#include <limits>
#include <cstdlib>

namespace CRAZYFISH{
    template<typename TYPE> class LinkedList;

    /**
     * An implementation of List ADT, using standard C++ 
     * dynamical memory allocation functions (new / delete). 
     * TYPE can be char, int, long, double or long double. 
     * 
     */
    template <typename TYPE>
    class LinkedList
    {
    public:
        /**
         * A node of the linked List.
         * 
         */
        class Node
        {
        public:
            TYPE value;		/**< The stored value. */
            Node* next;		/**< The address of the next node 
                                     of the linked List. */
            /** 
             * The default constructor.
             * 
             */
            Node()
            {
                next = NULL;
            };

            /** 
             * Constructor, with the value is _d.
             * 
             * @param _d The value to set.
             */
            Node(TYPE _d) : value(_d)
            {
                next = NULL;
            };

            /** 
             * The default destructor.
             * 
             */
            ~Node(){};
        };
    private:
        Node *__head;		/**< The head pointer of the List. */
        Node *__current;	/**< The address of current node.  */
        int __length;		/**< The length of the List. */

    public:
        /** 
         * The default constructor. Build an empty List.
         * 
         */
        LinkedList()
        {
            __head = __current = NULL;
            __length = 0;
        };

        /** 
         * Constructor, build a List with the value of the first 
         * node is _val.
         * 
         * @param _new An assigned node.
         */
        LinkedList(TYPE _val);

        /** 
         * Default destructor.
         * 
         */
        ~LinkedList(){};

        /** 
         * Print out all nodes of the List. For debug using.
         * 
         * 
         * @return  If everything is fine, return 0, otherwise -1.
         */
        int printLinkedList() const;

        /** 
         * Find if the List contains value _d.
         * 
         * @param _d The value to find.
         * 
         * @return The address of the first node 
         *         with value _d if found, otherwise NULL.
         */
        Node* find(TYPE _d) const;

        /** 
         * Insert a new node after the current pointer. If the List is
         * empty, then add it as the first node.
         * 
         * @param _val The value in the new node.
         * 
         * @return 0 for OK -1 for else.
         */
        int insert(TYPE _val);

        /** 
         * Delete the node AFTER the current pointer. 
         *
         * If the List only has one node, then it and make the List empty. 
         *
         * If the List is empty, then just do nothing. 
         *
         * If __current is NULL and __length not equal to zero, then delete
         * the first node. The __current with set to head after deletion.
         * 
         * Can not use name delete because it's a key word.
         * 
         * 
         * @return 0 for OK -1 for else.
         */
        int del();

        /** 
         * The __current move to the successor. If the current one is the 
         * last node, then do nothing. No predeccessor since it is a single
         * linked List.
         * 
         * 
         * @return 0 for OK -1 for else.
         */
        int succeed();

        /** 
         * Set the current position. Can set to NULL. Dangerous! Thers is 
         * nothing to guarantee that the node to set actually inside the List.
         * 
         * @param p The address of the current node to set.
         * 
         * @return 0 for OK -1 for else.
         */
        int setCurrent(Node *p);

        /** 
         * Get the pointer of the current node. Dangerous! User can do 
         * anything through this pointer.
         * 
         * 
         * @return The address of the current node.
         */
        Node* getCurrent() const;

        /** 
         * Get the pointer of the head. Dangerous! User can do 
         * anything through this pointer.
         * 
         * 
         * @return The head address.
         */
        Node* getHead() const;

        /** 
         * Get value of the current node. Report error if the current is 
         * NULL.
         * 
         * 
         * @return The value of current node.
         */
        TYPE getValue() const;
        
        /** 
         * Set value of the current node. Report error if the current is 
         * NULL.
         * 
         * 
         * @return 0 for OK -1 for else.
         */
        int setValue(TYPE _val);
    };


}
#else
//Do nothing.
#endif
